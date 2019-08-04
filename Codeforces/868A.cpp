/* 
By. Vansh Sethi
MAIN CONCEPT = Implementation + Strings
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    string pass;
    int n;
    cin >> pass;
    scanf("%d",&n);
    
    bool a = false, b = false;
    for (int i = 0; i < n; i++) {
        string check;
        cin >> check;
        if (check == pass) {
            a = true;
            b = true;
        }
        if (check[0] == pass[1]) {
            a = true;
        }
        if (check[1] == pass[0]) {
            b = true;
        }

    }

    if (a && b) {
        printf("YES");
    }
    else {
        printf("NO");
    }

}