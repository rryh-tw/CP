#include <bits/stdc++.h>
using namespace std;

#ifndef LONGLONG
#define LONGLONG
#define int long long
#endif

using ll = long long;
using pi = pair<int, int>;
using vec = vector<int>;

#define for0(i, n) for(int i = 0; i < n; i++)
#define for1(i, n) for(int i = 1; i <= n; i++)
#define forr(i, a, n) for(int i = n; i >= a; i--)
#define fs first
#define sc second
#define pb push_back
#define sz(x) (int)(x).size()
#define all(x) (x).begin(), (x).end()
#define CASE int _T; cin >> _T; for1(tt, _T)

// DEBUG TEMPLATE (from tourist)
template <typename A, typename B> 
string to_string(pair<const auto&, const auto&>);
string to_string(const string& s) { return '"' + s + '"'; }     // string -> string
string to_string(bool b) { return (b ? "true" : "false"); }     // bool   -> string
string to_string(const auto &v) {
  string res = "";
  for(auto it = v.begin(); it != v.end(); res += to_string(*it++) + ",");
  return "{" + res + "}";
}
template <typename A, typename B>                               // pair   -> string
string to_string(pair<A, B> p) { return "(" + to_string(p.first) + ", " + to_string(p.second) + ")"; }
void dbg() { cerr << endl; }
template<class T, class ...Args> void dbg(const T& x, const Args&... rest) {
cerr << " " << to_string(x);
dbg(rest...); }

#ifdef rrr
#define wer(...) cerr << "Line(" << __LINE__ << ") -> [" << #__VA_ARGS__ << "]:", dbg(__VA_ARGS__)
#else
#define wer(...)
#endif

void setup() {
#ifdef rrr
    cout << "┌---------------------------┐\n";
#ifdef LONGLONG
    cout << "|    int is now long long   |\n";
#endif
    cout << "└---------------------------┘\n";
#else
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
#endif
}

/*-+-+-+-+-+-+-+-+-+- have fun -+-+-+-+-+-+-+-+-+-*/

signed main() { setup();
}
