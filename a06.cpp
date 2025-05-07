#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;
    vector<int> A(100009), S(100009), L(100009), R(100009);
    //vector<int> A(N), S(N), L(Q), R(Q);
    //int A[100009], S[100009], L[100009], R[100009];
    for (int i = 1; i <= N; i++) cin >> A[i];
    for (int j = 1; j <= Q; j++) cin >> L[j] >> R[j];
    S[0] = 0;
    for (int i = 1; i <= N; i++) S[i] = S[i-1] + A[i];
    for (int j = 1; j <= Q; j++) {
        cout << S[R[j]] - S[L[j] - 1] << endl;
    }
}