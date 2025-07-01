#include <iostream>
#include <algorithm>
using namespace std;

int N, A[100009], dp[100009], L[100009], length=0;

int main() {
    cin >> N;
    for(int i=1; i <= N; i++) cin >> A[i];

    for (int i = 1; i <= N; i++) {
        int pos = lower_bound(L+1, L+length+1, A[i]) - L;
        dp[i] = pos;

        L[dp[i]] = A[i];
        if(dp[i] > length) length ++;


    }

    cout << length << endl;
    return 0;

}