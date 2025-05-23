#include <bits/stdc++.h>

using namespace std;

#define m 1000000007

int main() {
    vector<int> dp(1000009);
    dp[1] = dp[2] = 1;
    for (int k = 3; k <= 1000000; k++) {
        dp[k] = dp[k - 1] + dp[k - 2];
        dp[k] %= m;
    }

    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        cout << dp[n] << endl;
    }
}