/* [ 0-index Frenwick Tree ]
 *  宣告       : FT ft(maxn);
 *  單點修改   : update(2, 50);    // a[2] = 50
 *  查詢前綴和 : query(5);         // sum(a[0...5])
 *  查詢區間和 : query(2, 6);      // sum(a[2...6])
 */
struct FT {
    vector<int> t;
    FT(int n) : t(n) {}
    void update(int k, int val) {
        for(; k < (int)t.size(); k |= k + 1) t[k] += val;
    }
    int query(int k) {
        int res = 0;
        for(k++; k > 0; k &= k - 1) res += t[k - 1];
        return res;
    }
    int query(int l, int r) {
        return query(r) - query(l - 1);
    }
};
