#include <bits/stdc++.h>
#include <string>

using namespace std;

int sec(int x, int y) {
    if (x==y) {
        return -1;
    }
    if (x > y) {
        return 0;
    }
    else{
        return 1;
    }
}

int main() {
    //input
    int n;
    scanf("%d",&n);
    string moves;
    cin >> moves;

    // algorithm
    int x = 0, y = 0, sect[n], coins = 0;
    for (int i = 0; i < n; i++) {
        if (moves[i] == 'U') {
            y += 1;
        }
        else {
            x += 1;
        }

        int a = sec(x,y);
        sect[i] = a;
    }
   
    for (int i = 0; i < n-1; i++) {
        int current = sect[i];
        int past = sect[i-1];
        int future = sect[i+1];
        if (current == -1) {
            if (past != current && future != current && future != past) {
                coins += 1;
            }
        }
    }    

    //output
    printf("%d",coins);

}