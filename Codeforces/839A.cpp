/* 
By. Vansh Sethi
MAIN CONCEPT = Loops
*/

#include <bits/stdc++.h>

int main() {
    
    //input
    int n, k;
    scanf("%d %d",&n,&k);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
    }

    // data processing(algorithm)
    int candies = 0, reserves = 0, days = 0;
    bool achieved = false;
    
    for (int i = 0; i<n; i++) {
        int a = 0;
        a = arr[i];
        
        if (a >= 8) {
            int reservese = a - 8;
            reserves += reservese;
            candies += 8;
            days += 1;
        }
        
        else{
            candies += a;

            if (reserves > 0) {
                int many = 8 - a;
                if (many >= reserves) {
                    candies += reserves;
                    reserves = 0;
                }
                else {
                    candies += many;
                    reserves -= many;
                }
            }
            days += 1;
        }

        if (candies >= k) {
            achieved = true;
            break;
        }
          
    }

    // output
        if (achieved) {
            printf("%d",days);
        }
        else {
            printf("-1");
        }

}
