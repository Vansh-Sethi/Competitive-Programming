#include <bits/stdc++.h>

int main() {
    
    //input
    int s, v1, v2, t1, t2;
    scanf("%d %d %d %d %d",&s,&v1,&v2,&t1,&t2);
    
    //algorithm
    int first = (t1*2)+(v1*s);
    int second = (t2*2)+(v2*s);

    //output
    if (first < second) {
        printf("First");
    }
    else if (first > second) {
        printf("Second");
    }
    else {
        printf("Friendship");
    }
}