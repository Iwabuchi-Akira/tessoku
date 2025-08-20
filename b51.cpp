#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
    string S;
    cin >> S;

    stack<int> Stack;
    for (int i = 0; i <= S.size(); i++) {
        if (S[i] == '(') {
            Stack.push(i+1);
        }
        if (S[i] == ')') {
            cout << Stack.top() << " " << i+1 << endl;
            Stack.pop();
        }
    }

    return 0;

}