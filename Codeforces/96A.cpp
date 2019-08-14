#include <bits/stdc++.h>

using namespace std;

int main() {
    char s[101];
    scanf("%s",s);
    bool a = false;
    for (int i = 0; i<strlen(s);i++) {
        bool b = true;
        char team = s[i];
        int current = 1;
        int j = i+1;
        while (b) {
            if (s[j] == team) {
                current++;
                j++;
            }
            else {
                b = false;
            }
        }
        if (current >= 7) {
            printf("YES");
            a = true;
            break;
        }
    }
    if (!a) {
        printf("NO");
    }

}