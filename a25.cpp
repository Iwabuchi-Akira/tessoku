#include <iostream>
#include <algorithm>
using namespace std;

long long H,W,dp[39][39];
char C[39][39];

int main() {
    cin >> H >> W;
    for (int i = 1; i <= H; i++) {
        for (int j = 1; j <= W; j++) {
            cin >> C[i][j];
        }
    }

    dp[1][1] = 1;

    for (int i = 1; i <= H; i++) {
        for (int j = 1; j <= W; j++){
            if (C[i][j] == '.') {
                dp[i][j] = dp[i][j] + dp[i-1][j] + dp[i][j-1];
            }
            else {
                dp[i][j] = 0;
            }
        }
    }

    cout << dp[H][W] << endl;
}