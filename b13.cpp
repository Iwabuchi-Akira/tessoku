#include <iostream>
using namespace std;

int N, K;
int A[100009], S[100009], R[100009];

int main() {
    cin >> N >> K;
    for (int i=1; i<=N; i++) cin >> A[i];

    for (int i=1; i<=N; i++) {
        S[i] = S[i-1] + A[i];
    }

    for (int i=1; i<= N; i++){
        if (i==1) R[i] = 1;
        else R[i] = R[i-1];

        while (R[i] <= N && S[R[i]] - S[i-1] <= K) {
            R[i] += 1;
        }
    }

    long long answer = 0;
    for (int i=1; i<=N; i++) {
        answer += R[i] - i;
    }

    cout << answer << endl;
}