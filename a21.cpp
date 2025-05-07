#include <iostream>
#include <algorithm>
using namespace std;

int N, P[2009], A[2009], dp[2009][2009];

int main() {
    cin >> N;
    for (int i = 1; i <= N; i++) cin >> P[i] >> A[i];
    dp[1][N] = 0;

    for (int i = 1; i <= N; i++) {
        for (int j = N; j >= 1; j--) {
            int x, y;
            x = dp[i-1][j];
            y = dp[i][j+1];
            if (i-1 <= P[i-1] && P[i-1] <= j) {
                x = dp[i-1][j] + A[i-1];
            }
            if (i <= P[j+1] && P[j+1] <= j+1) {
                y = dp[i][j+1] + A[j+1];
            }
            dp[i][j] = max(x,y);
        }
    }

    cout << dp[N][1] << endl;
    return 0;
}