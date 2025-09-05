#include <iostream>
using namespace std;

int N;

int main() {
    cin >> N;
    int dp[10000009];
    dp[1] = 1;
    dp[2] = 1;
    for (int i = 3; i <= N; i++) {
        dp[i] = (dp[i-2] + dp[i-1]) % 1000000007;
    }
    cout << dp[N] << endl;
    return 0;
}