/* 
By. Vansh Sethi
MAIN CONCEPT = Loops
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    scanf("%d",&n);

    int total = 0;
    for (int i = 1; i <= n/2; i++) {
        if (n%i==0) {
            total++;
        }
    }

    printf("%d",total);
}