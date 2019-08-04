/* 
By. Vansh Sethi
MAIN CONCEPT = Loops
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; 
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
    }

    bool a = false;
    for (int i = 0; i < n; i++) {
        int start = arr[i];
        int middle = arr[start-1];
        int end = arr[middle-1];
        if (arr[end-1] == start) {
            a = true;
            break;
        }
    }

    if (a) {
        printf("YES");
    }
    else {
        printf("NO");
    }

}