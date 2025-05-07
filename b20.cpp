#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string S, T;
int dp[2009][2009];

int main() {
    cin >> S;
    cin >> T;

    int N = S.size();
    int M = T.size();

    dp[0][0] = 0;

    for (int i = 0; i <= N; i++) {
        for (int j = 0; j <= M; j++) {
            if(i >= 1 && j >= 1) {
                if(S[i-1] == T[j-1]) {
                    dp[i][j] = min({
                        dp[i-1][j] + 1,
                        dp[i][j-1] + 1,
                        dp[i-1][j-1]
                    });
                }
                else {
                    dp[i][j] = min({
                        dp[i-1][j] + 1,
                        dp[i][j-1] + 1,
                        dp[i-1][j-1] + 1,
                    });
                }
            }
            else if (i>=1) {
                dp[i][j] = dp[i-1][j] + 1;
            }
            else if (j>=1) {
                dp[i][j] = dp[i][j-1] + 1;
            }
        }
    }

    cout << dp[N][M] << endl;
    return 0;
}