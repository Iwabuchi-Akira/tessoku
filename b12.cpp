#include <iostream>
#include <cmath>
using namespace std;

int N;

bool check(double x) {
    if (pow(x, 3) + x >= N) return true;
    return false;
}

int main() {
    cin >> N;
    double L = 0.001, R = 50;
    while (R - L > 0.001) {
        double x = (L+R) / 2;
        bool answer = check(x);
        if (!answer) L = x+0.001;
        if (answer) R = x;
    }
    cout << L << endl;
    return 0;
}