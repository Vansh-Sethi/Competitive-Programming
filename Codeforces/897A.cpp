/* 
By. Vansh Sethi
MAIN CONCEPT = Nested Loops
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    scanf("%d %d",&n,&m);
    char s[n];
    scanf("%s",s);
    
    for (int i = 0; i < m; i++) {
        int l, r;
        char cf, cs;
        scanf("%d %d %c %c",&l,&r,&cf,&cs);
        for (int j = l; j <= r; j++) {
            if (s[j-1] == cf) {
                s[j-1] = cs;
            }
        }
    }

    cout << s;
}