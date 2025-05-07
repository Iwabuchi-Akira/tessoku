#include <iostream>
using namespace std;

int main() {
    string N;
    cin >> N;
    int answer = 0;
    for (int i = 0; i < N.size(); i++) {
        int digit;
        int place = (1<<(N.size() - 1 - i));
        if (N[i] == '0') digit = 0;
        if (N[i] == '1') digit = 1;
        answer += digit * place;
    }
    cout << answer << endl;
    return 0;
}