#include <bits/stdc++.h>

using namespace std;

int main() {
    map<char,int> themap;
    int pointer = 1;
    for (char ch = 'a'; ch <= 'z'; ch++) {
        themap.insert(make_pair(ch,pointer));
        pointer++;
    }

    char s[101],s2[101];
    scanf("%s",s);
    scanf("%s",s2);

    int ans1 = 0, ans2 = 0;
    for (int i = 0; i < strlen(s); i++) {
        char z = s[i];
        char y = s2[i];
        z = tolower(z);
        y = tolower(y);
        auto it = themap.find(z);
        auto it2 = themap.find();
        int value = it->second;
        int value2 = it2->second;
        ans1 += value;
        ans2 += value2;
    }
    if (ans1 > ans2) {
        printf("1");
    }
    else if (ans1 < ans2) {
        printf("-1");
    }
    else {
        printf("0");
    }


}