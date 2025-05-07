#include <iostream>
using namespace std;
 
int N;
int Z[1509][1509] = {0};
int A,B,C,D;
int result = 0;

int main() {

    cin >> N;

    for (int i = 1; i <= N; i++) {
        cin >> A >> B >> C >> D;
        Z[A][B] += 1;
        Z[A][D] -= 1;
        Z[C][B] -= 1;
        Z[C][D] += 1;
    }

    for (int i = 0; i<=1500; i++) {
        for (int j = 1; j<=1500; j++) {
            Z[i][j] += Z[i][j-1] + Z[i][j];
        }
    }

    for (int j = 0; j <= 1500; j++) {
        for (int i = 1; i<=1500; i++) {
            Z[i][j] += Z[i-1][j] + Z[i][j];
        }
    }

    for (int i = 0; i<=1500; i++) {
        for (int j = 0; j <= 1500; j++) {
            if (Z[i][j] >= 1) {
                Z[i][j] = 1;
            }
        }
    }

    for (int i = 0; i<=1500; i++) {
        for (int j = 0; j <= 1500; j++) {
            if (Z[i][j] >= 1) {
                result ++;
            }
        }
    }

    cout << result << endl;
    return 0;
}