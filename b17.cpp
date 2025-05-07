#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N, h[100009], dp[100009];
vector<int> answer;

int main() {
    cin >> N;
    for (int i = 1; i <= N; i++) cin >> h[i];

    dp[1] = 0;
    dp[2] = abs(h[2] - h[1]);

    for (int i = 3; i <= N; i++) {
        dp[i] = min(dp[i-1] + abs(h[i] - h[i-1]), dp[i-2] + abs(h[i] - h[i-2]));
    }

    int Place = N;

    while(true) {
        answer.push_back(Place);
        if (Place == 1) break;
        if (dp[Place] == dp[Place-1] + abs(h[Place] - h[Place-1])) {
            Place -= 1;
        } else {
            Place -= 2;
        }
    }

    reverse(answer.begin(), answer.end());

    cout << answer.size() << endl;
    for (int i = 0; i < answer.size(); i++) {
        if (i >= 1) cout << " ";
        cout << answer[i];
    }
    cout << endl;
    return 0;
}