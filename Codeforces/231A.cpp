#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,ans = 0;
    scanf("%d",&n);
    int arr[n][3];
    for (int i = 0; i < n; i++) {
        scanf("%d %d %d",&arr[i][0],&arr[i][1],&arr[i][2]);
    }
    for (int i = 0; i<n; i++) {
        int t = 0;
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] == 1) {
                t++;
            }
        }
        if (t >= 2) {
            ans++;
        }
    }
    printf("%d",ans);
}