#include <iostream>
#include <vector>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;
    int X[H][W];
    for (int i = 0; i < H ; i++) {
        for (int j = 0; j < W; j ++) {
            cin >> X[i][j];
        }
    }
    int Q;
    cin >> Q;
    int A[Q], B[Q], C[Q], D[Q];
    for (int i = 0; i < Q; i++) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        A[i] = a - 1;
        B[i] = b - 1;
        C[i] = c - 1;
        D[i] = d - 1;
    }
    for (int k = 0; k < Q; k++) {
        int sum = 0;
        for (int i = A[k]; i <= C[k]; i++) {
            for (int j = B[k]; j <= D[k]; j++) {
                sum += X[i][j];
            }
        }
        cout << sum << endl;
    }
}