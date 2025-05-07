#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int N, dp[1009][1009];
string S;

int main() {
    cin >> N;
    cin >> S;
    for (int i = 1; i <= N; i++) dp[i][i] = 1;

    for (int i = N-1; i >= 1; i--) {
        for (int j = i+1; j <= N; j++) {
            if (S[i-1] == S[j-1]) {
                dp[i][j] = max({
                    dp[i+1][j],
                    dp[i][j-1],
                    dp[i+1][j-1] + 2
                });
            }
            else {
                dp[i][j] = max(dp[i+1][j], dp[i][j-1]);
            }
        }
    }

    cout << dp[1][N] << endl;
    // for (int i = 1; i <= N; i++) {
    //     for (int j = 1; j <= N; j++) {
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    return 0;
}