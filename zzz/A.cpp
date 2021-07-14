#include <bits/stdc++.h>
using namespace std;

#define int long long
using ll = long long;

const int mod = 998244353;
ll modinv(ll a, ll m) {
	assert(m > 0);
	if (m == 1) return 0;
	a %= m;
	if (a < 0) a += m;
	assert(a != 0);
	if (a == 1) return 1;
	return m - modinv(m, a) * m / a;
}
template <int MOD_> struct modnum {
private:
	int v;
public:
	static const int MOD = MOD_;

	modnum() : v(0) {}
	modnum(ll v_) : v((int)(v_ % MOD)) { if (v < 0) v += MOD; }
	explicit operator int () const { return v; }
	friend bool operator == (const modnum& a, const modnum& b) { return a.v == b.v; }
	friend bool operator != (const modnum& a, const modnum& b) { return a.v != b.v; }

	modnum operator ~ () const {
		modnum res;
		res.v = modinv(v, MOD);
		return res;
	}

	modnum& operator += (const modnum& o) {
		v += o.v;
		if (v >= MOD) v -= MOD;
		return *this;
	}
	modnum& operator -= (const modnum& o) {
		v -= o.v;
		if (v < 0) v += MOD;
		return *this;
	}
	modnum& operator *= (const modnum& o) {
		v = (int)(ll(v) * ll(o.v) % MOD);
		return *this;
	}
	modnum& operator /= (const modnum& o) {
		return *this *= (~o);
	}

	friend modnum operator + (const modnum& a, const modnum& b) { return modnum(a) += b; }
	friend modnum operator - (const modnum& a, const modnum& b) { return modnum(a) -= b; }
	friend modnum operator * (const modnum& a, const modnum& b) { return modnum(a) *= b; }
	friend modnum operator / (const modnum& a, const modnum& b) { return modnum(a) /= b; }
};

using num = modnum<998244353>;
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    for(int tt = 0; tt < t; tt++) {
        int n;
        string s;
        cin >> n >> s;

        vector<int> ord;
        for(int i = 0; i < n; i++) if(s[i] == '0'){
            ord.push_back(i % 2);
        }

        int mx = n / 2;
        if(ord.size() && n % 2 == 1 && ord[0] == 0) mx++;


        for(int i = 1; i < (int)ord.size(); i++) {
            if(ord[i-1] == ord[i]) mx--;
            else if(ord[i] == n % 2) mx--;
        }

        num ans = 1;
        num tmp = ord.size();
        int k = ord.size();

        for(int i = 1; i < mx; i++) {
            ans += tmp;
            tmp = tmp * (k + 1) / (k - ord.size() + 2);
            k++;
        }
        cout << (int)ans << endl;
        


    }
}
