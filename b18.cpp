#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N,S;
int A[69];
bool dp[69][10009];
vector<int> Answer;

int main() {
    cin >> N >> S;
    for (int i=1; i<= N; i++) cin >> A[i];
    dp[0][0] = true;
    for (int i = 1; i <= S; i++) dp[0][i] =false;
    
    for (int i = 1; i <= N; i++) {
        for (int j = 0; j <= S; j++) {
            if (j < A[i]) {
                if (dp[i-1][j] == true) {
                    dp[i][j] = true;
                } else {
                    dp[i][j] = false;
                }
            }
            if (j >= A[i]) {
                if (dp[i-1][j] == true || dp[i-1][j-A[i]] == true) {
                    dp[i][j] = true;
                }
                else {
                    dp[i][j] = false;
                }
            }
        }
    }

    if (dp[N][S] == false) {
        cout << -1 << endl;
        return 0;
    }

    int place = S;

    for (int i = N; i >= 1; i--) {
        if (dp[i-1][place] == false) {
            place -= A[i];
            Answer.push_back(i);
        }
    }

    reverse(Answer.begin(), Answer.end());

    cout << Answer.size() << endl;

    for (int i=0; i < Answer.size(); i++) {
        if(i>=1) cout << " ";
        cout << Answer[i];
    }
    cout << endl;
    return 0;
}