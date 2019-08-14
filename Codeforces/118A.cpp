#include <bits/stdc++.h>

using namespace std;

int main() {
    char s[101], stringnew[202];
    scanf("%s",s);
    int stringlen = 0;
    for (int i = 0; i < strlen(s); i++) {
        char p = s[i];
        p = tolower(p);
        if (p == 'a' || p == 'e' || p == 'i' || p == 'o' || p == 'u' || p == 'y') {
            continue;
        }
        else {
            stringnew[stringlen] = '.';
            stringlen++;
            stringnew[stringlen] = p;
            stringlen++;
        }
    }   

    for (int i = 0; i < stringlen; i++) {
        cout << stringnew[i];
    }
}