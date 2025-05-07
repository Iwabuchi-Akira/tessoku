#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i=0; i < N; i++) cin >> A[i];
    int Q;
    cin >> Q;
    vector<int> L(Q), R(Q);
    for (int i=0; i < Q; i++) cin >> L[i] >> R[i];
    vector<int> sum(N,0);
    for (int i = 1; i <= N; i++) {
        sum[i] = sum[i-1] + A[i-1];
    }
    for (int i=0; i < Q; i++) {
        int win = sum[R[i]] - sum[L[i] - 1];
        int lose = R[i] - L[i] + 1 - win;
        if (win > lose) cout << "win"<< endl;
        else if (lose > win) cout << "lose" << endl;
        else cout << "draw" << endl;
    }
}