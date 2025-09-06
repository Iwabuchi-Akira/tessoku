#include <iostream>
using namespace std;

long long n, r;

long long Power(long long a, long long b, long long m) {
    long long answer = 1;
    long long p = a;
    for (int i = 0; i < 60; i++) {
        long long divisor = 1LL << i;
        if ((b / divisor) % 2 == 1) {
            answer = (answer * p) % m;
        }
        p = (p * p) % m;
    }
    return answer;
}

int main() {
    cin >> n >> r;
    const long long M = 1000000007;
    long long numerator=1, denominator=1;
    for (int i=n-r+1; i <= n; i++) numerator = (numerator * i) % M;
    for (int i = 2; i <= r; i++) denominator = (denominator * i) % M;
    cout << (numerator * Power(denominator, M - 2, M)) % M << endl;
    return 0;
}