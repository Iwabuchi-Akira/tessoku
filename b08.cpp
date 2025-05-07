#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    int N;
    cin >> N;
    int X[N+1], Y[N+1];
    for (int i = 1; i <= N; i++) cin >> X[i] >> Y[i];
    int Q;
    cin >> Q;
    int a[Q+1], b[Q+1], c[Q+1], d[Q+1];
    for (int i = 1; i <= Q; i++) {
        cin >> a[i] >> b[i] >> c[i] >> d[i];
    }
    for (int i = 1; i <= Q; i++) {
        int count = 0;
        for (int n = 1; n <= N; n++) {
            if(a[i] <= X[n] && X[n] <= c[i] && b[i] <= Y[n] && Y[n] <= d[i]) {
                count ++;
            }
        }
        cout << count << endl;
    }
}