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
    ll N, M, T;
    cin >> N >> M >> T;
    vector<ll> A(M), B(M);
    REP(i, 0, M) cin >> A[i] >> B[i];

    ll cur = N;
    ll lt = 0;
    auto ret = true;
    REPEQ(i, 0, M) {
        auto a = i < M ? A[i] : T;
        auto b = i < M ? B[i] : T;
        cur -= a - lt;
        if (cur <= 0) ret = false;
        cur = min(N, cur + b - a);
        lt = b;
    }

    if (ret) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
