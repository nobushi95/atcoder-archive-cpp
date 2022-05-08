#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using ll = long long;
#define REP(i, left, right) for (ll i = left; i < right; i++)
#define RREP(i, right, left) for (ll i = right; i >= left; i--)
#define REPEQ(i, left, right) for (ll i = left; i <= right; i++)
#define FORE(elem, container) for (auto & elem : container)
#define ALL(x) (x).begin(), (x).end()
template<class T> bool chmin(T &a, const T &b) { if (a > b) { a = b; return true; } return false; }
template<class T> bool chmax(T &a, const T &b) { if (a < b) { a = b; return true; } return false; }
template<class T> T gcd(const T &a, const T &b) { if (b == 0) return a; else return gcd(b, a % b); }
template<class T> T lcm(const T &a, const T &b) { return abs(a) / gcd(a, b) * abs(b); }

int main() {
    ll H, W, R, C;
    cin >> H >> W >> R >> C;

    ll ans = 0;
    if (R + 1 >= 1 && R + 1 <= H) ans++;
    if (R - 1 >= 1 && R - 1 <= H) ans++;
    if (C + 1 >= 1 && C + 1 <= W) ans++;
    if (C - 1 >= 1 && C - 1 <= W) ans++;

    cout << ans << endl;

    return 0;
}
