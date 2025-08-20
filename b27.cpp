#include <iostream>
using namespace std;

int GCD(int N, int M) {
    if (N < M) swap(N,M);
    while (M > 0) {
        int temp = M;
        M = N % M;
        N = temp;
    }
    return N;
}

long long LCM(long long N, long long M) {
    int gcd = GCD(N,M);
    return N * M / gcd;
}

long long A, B;

int main() {
    cin >> A >> B;
    cout << LCM(A, B) << endl;
    return 0;
}

