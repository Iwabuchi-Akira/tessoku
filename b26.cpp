#include <iostream>
using namespace std;

int N;
bool Deleted[1000009];

int main() {
    cin >> N;
    for (int i = 2; i <= N; i++) Deleted[i] = false;
    for (int i = 2; i * i <= N; i++) {
        if (Deleted[i] == true) continue;
        for (int j = 2; i * j <= N; j++) {
            Deleted[i * j] = true;
        }
    }
    for (int i = 2; i <= N; i++) {
        if (Deleted[i] == false) {
            cout << i << endl;
        }
    }
    return 0;
}