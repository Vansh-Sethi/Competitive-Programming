/* 
By. Vansh Sethi
MAIN CONCEPT = Loops
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    scanf("%d %d",&n,&m);
    int sqrs[m];
    int ans[n];
    fill(ans,ans + n, 0);
    for (int i=0; i < m; i++) {
        scanf("%d",&sqrs[i]);
    }

    for (int i=0; i < m; i++) {
        int index = sqrs[i];
        ans[index-1] += 1;
    }
    
    int small = m+1;
    for (int i = 0; i < n; i++) {
        if (ans[i] < small) {
            small = ans[i];
        }
       // printf("%d",ans[i]);
    }

    printf("%d",small);
}