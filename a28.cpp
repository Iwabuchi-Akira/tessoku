#include <iostream>
using namespace std;

int N, A[100009];
char T[100009];

int main() {
    cin >> N;
    int answer = 0;
    for (int i = 1; i <= N; i++) {
        cin >> T[i] >> A[i];
        A[i] %= 10000;

        if (T[i] == '+') answer += A[i];
        if (T[i] == '-') answer -= A[i];
        if (T[i] == '*') answer *= A[i];

        if (answer < 0) answer += 10000;

        answer %= 10000;
        cout << answer << endl;
    }
    return 0;
}