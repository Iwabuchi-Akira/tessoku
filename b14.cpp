#include <bits/stdc++.h>
using namespace std;

int N, K;
int A[16], B[16];
int P[1<<16], Q[1<<16];

int main() {
    cin >> N >> K;
    int N1, N2;
    if (N % 2 == 0) {
        N1 = N/2;
        N2 = N/2;
    } else {
        N1 = N/2;
        N2 = N/2+1;
    }
    
    for (int i=1; i<=N1; i++) cin >> A[i];
    for (int i=1; i<= N2; i++) cin >> B[i];

    for (int i = 0; i < (1 << N1); i++) {
        int sum = 0;
        for (int j = 1; j <= N1; j++) {
            int wari = 1 << (j-1);
            if ((i / wari) % 2 == 1) sum += A[j];
        }
        P[i] = sum;
    }

    for (int i = 0; i<(1 << N2); i++) {
        int sum = 0;
        for (int j = 1; j <= N2; j++) {
            int wari = 1 << (j-1);
            if ((i / wari) % 2 == 1) sum += B[j];
        }
        Q[i] = sum;
    }

    sort(P+1, P+(1<<N1)+1);
    sort(Q+1, Q+(1<<N2)+1);

    for (int i=1; i <= (1<<N1); i++) {
        int pos = lower_bound(Q+1, Q+(1<<N2)+1, K - P[i]) - Q;
        if(pos <= 1<<N2 && Q[pos] == K-P[i]){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}