#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t,n;
    cin >> t >> n;
    vector<int> L(n+1), R(n+1);
    vector<int> arr(2*t);
    for (int i = 1; i <= n; i++) {
        int l,r;
        cin >> l >> r;
        arr[2*l] += 1;
        arr[2*r+1] -= 1;
    }
    vector<int> sum(2*t);
    sum[0] = arr[0];
    for (int i = 1; i < 2*t; i++) {
        sum[i] = sum[i-1] + arr[i];
    }
    for (int i = 0; i < t; i ++) {
        cout << sum[2*i+1] << endl;
    }
}