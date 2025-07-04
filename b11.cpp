#include <iostream>
#include <algorithm>

using namespace std;

int N, A[100009], Q, X[100009];

int main() {
    cin >> N;
    for (int i=1; i<=N; i++) cin >> A[i];
    cin >> Q;
    for (int i=1; i<=Q; i++) cin >> X[i];
    sort(A+1, A+N+1);

    for (int i = 1; i <= Q; i++) {
        int pos1 = lower_bound(A+1, A+N+1, X[i]) - A;
        cout << pos1 - 1 << endl;
    }
    return 0;
}