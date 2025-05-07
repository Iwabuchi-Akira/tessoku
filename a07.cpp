#include <iostream>
#include <vector>
using namespace std;

int main() {
    int D,N;
    cin >> D >> N;
    vector<int> L(N+1), R(N+1), arr(D+1,0);
    for (int i=1; i<=N; i++) {
        int l,r;
        cin >> l >> r;
        arr[l] += 1;
        arr[r+1] -= 1;
    }
    vector<int> sum(D+1,0);
    for (int i=1; i<=D; i++) {
        sum[i] = sum[i-1] + arr[i];
        cout << sum[i] << endl;
    }
}
