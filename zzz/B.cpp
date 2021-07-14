#include <bits/stdc++.h>
using namespace std;


int k;

int DOR(int a, int b) {
    cout << "DOR :" << a << "^" << b << "=";
    if(a < b) swap(a, b);
    vector<int> v;
    while(a) v.push_back(a % k), a /= k;
    int rt = 0;
    for(int i = 0; b; i++) {
        v[i] = (v[i] - b % k + k) % k;
        b /= k;
    }

    for(int i = v.size() - 1; i >= 0; i--) {
        rt *= k;
        rt += v[i];
    }
    cout << rt << endl;
    return rt;
}

signed main() {
    int t;
    cin >> t;
    for(int tt = 0; tt < t; tt++) {
        int n;
        cin >> n >> k;
        bool state = false;
        int a = 0;
        for(int i = 0; i < n; i++) {
            int guess = DOR(a, i);
            cout << guess << endl;
            a = DOR(a, guess);
            cin >> state;
            if(state == 1) break;
        }
 
        
    }
 
}
