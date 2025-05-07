#include <iostream>
using namespace std;

long long N, K, A[100009];

bool check(long long x) {
    long long sum = 0;
    for (int i = 1; i <= N; i++) sum += x / A[i];
    if (sum >= K) return true;
    return false;
}

int main() {
    cin >> N >> K;
    for (int i=1; i<= N; i++) cin >> A[i];
    long long L = 1, R = 1'000'000'000;
    while (L < R) {
        long long M = (L + R) / 2;
        bool answer = check(M);
        if (!answer) L = M+1;
        if (answer) R = M;
    }

    cout << L << endl;
    return 0;
}