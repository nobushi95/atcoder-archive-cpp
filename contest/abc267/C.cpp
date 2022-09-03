#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
const ll infl = 1LL << 60;
const int inf = INT_MAX / 2;
#define REP(i, left, right) for (ll i = left; i < right; i++)
#define RREP(i, right, left) for (ll i = right; i >= left; i--)
#define REPEQ(i, left, right) for (ll i = left; i <= right; i++)
#define FORE(elem, container) for (auto & elem : container)
#define ALL(x) (x).begin(), (x).end()
#define RALL(x) (x).rbegin(), (x).rend()
template<class T> bool chmin(T &a, const T &b) { if (a > b) { a = b; return true; } return false; }
template<class T> bool chmax(T &a, const T &b) { if (a < b) { a = b; return true; } return false; }

int main() {
    ll N, M;
    cin >> N >> M;
    vector<ll> A(N);
    FORE(a, A) cin >> a;

    vector<ll> acc(N);
    acc[0] = A[0];
    REP(i, 1, N) acc[i] = acc[i - 1] + A[i];

    vector<ll> dp(N + 10, 0);
    REP(i, 0, M) dp[0] += (i + 1) * A[i];

    REPEQ(i, 1, N - M) {
        dp[i] = dp[i - 1] + A[i + M - 1] * M;
        ll diff = 0;
        if (i - 1 == 0) diff = acc[i + M - 2];
        else diff = acc[i + M - 2] - acc[i - 2];
        dp[i] -= diff;
    }

    ll ans = -infl;
    REPEQ(i, 0, N - M) chmax(ans, dp[i]);

    cout << ans << endl;

    return 0;
}
