#include <iostream>
using namespace std;

long long N;

int main() {
    cin >> N;
    cout << (N / 3) + (N / 5) + (N / 7) - (N / 15) - (N / 35) - (N / 21) + (N / 105) << endl;
    return 0;
}