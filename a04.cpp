#include <iostream>
using namespace std;

int N;

int main() {
    cin >> N;
    for (int i = 9; i >= 0; i--) {
        int dnm = (1 << i);
        cout << N / dnm % 2;
    }
    cout << endl;
}