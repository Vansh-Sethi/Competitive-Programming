#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x = 0; 
    scanf("%d",&n);
    char arr[n][4];
    for (int i = 0; i < n; i++) {
        scanf("%s",arr[i]);
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] == '+' && arr[i][j+1] == '+') {
                x++;
            }
            else if (arr[i][j] == '-' && arr[i][j+1] == '-') {
                x--;
            }

        }
    }
    printf("%d",x);
}