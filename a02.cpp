#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, X;
    cin >> N >> X;
    string ans = "No";
    for (int i=0; i<N; i++) {
        int A;
        cin >> A;
        if (X == A) {
            ans = "Yes";
        }
    }
    cout << ans << endl;
}