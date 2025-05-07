#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    string ans = "No";
    cin >> N;
    vector<int> A(N,0);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    for (int i = 0; i < N-2; i++) {
        for (int j = i+1; j < N-1; j++) {
            for (int k = j+1; k < N; k++) {
                if (A[i] + A[j] + A[k] == 1000) {
                    ans = "Yes";
                }
            }
        }
    }
    cout << ans << endl;
}