/* 
By. Vansh Sethi
MAIN CONCEPT = Loops + Queue
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    scanf("%d",&n);
    int games[n]; 
    for (int i = 0; i < n; i++) {
        scanf("%d",&games[i]);
    }

    int winner, player1 = 1, player2 = 2;
    queue<int> spectator;
    spectator.push(3);
    bool a = true;
    for (int i = 0; i < n; i++) {
        winner = games[i];
        if (winner == spectator.front()) {
            a = false;
            break;
        }
        if (player2 == winner) {
            spectator.push(player1);
            player1 = spectator.front();
            spectator.pop();
        } 
        else {
            spectator.push(player2);
            player2 = spectator.front();
            spectator.pop();
        }
    }

    if (a) {
        printf("YES");
    }
    else {
        printf("NO");
    }

}