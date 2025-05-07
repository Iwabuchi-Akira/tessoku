#include <iostream>
using namespace std;

int H, W, N;
int A,B,C,D;
int Z[1509][1509] = {0};

int main() {
    cin >> H >> W >> N;
    for (int t = 1; t <= N; t++) {
        cin >> A >> B >> C >> D;
        Z[A][B]++;
        Z[C+1][B]--;
        Z[A][D+1]--;
        Z[C+1][D+1]++;
    }


    for (int i = 1; i<=H; i++) {
        for (int j = 1; j<=W; j++) {
            Z[i][j] = Z[i][j-1] + Z[i][j];
        }
    }

    for (int j = 1; j<=W; j++) {
        for (int i = 1; i<=H; i++) {
            Z[i][j] = Z[i-1][j] + Z[i][j];
        }
    }

    for (int i = 1; i<=H; i++) {
        for (int j = 1; j<=W; j++) {
            cout << Z[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}