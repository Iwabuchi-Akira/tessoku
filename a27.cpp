#include <iostream>
using namespace std;

int A, B;

int GCD(int A, int B) {
    if (A < B) swap(A,B);
    while (B > 0) {
        int temp = B;
        B = A % B;
        A = temp;
    }
    return A;
}

int main() {
    cin >> A >> B;
    cout << GCD(A, B) << endl;
    return 0;
}