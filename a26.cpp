#include <iostream>
using namespace std;

int Q, X[10009];

bool isPrime(int x) {
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return false;
    }
    return true;
}

int main() {
    cin >> Q;
    for (int i = 1; i <= Q; i++) cin >> X[i];
    for (int i = 1; i <= Q; i++) {
        if (isPrime(X[i])) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}