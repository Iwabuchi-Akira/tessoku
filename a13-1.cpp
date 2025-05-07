#include <iostream>
#include <algorithm>
using namespace std;

int N, K, A[100009];
int answer;

int main() {
    cin >> N >> K;
    for (int i = 1; i <= N; i++) cin >> A[i];
    
    for (int i = 1; i <= N; i++) {
        int L = i, R = N;
        while (L < R) {
            int t = (L + R) / 2;
            if (A[t] > A[i] + K) {
                R = t - 1;
            }
            if (A[t] < A[i] + K) {
                L = t + 1;
            }
            if (A[t] == A[i] + K) {
                L = t;
                R = t;
            }
        }
        cout << R-i << endl;
        answer += R - i;
    }
    cout << answer << endl;
}