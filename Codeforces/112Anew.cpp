#include <bits/stdc++.h>

using namespace std;

int main() {
    string s, s2;
    cin >> s >> s2;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower); 
    int q = s.compare(s2);
    if (q==0) {
        printf("0");
    }
    else if (s<s2) {
        printf("-1");
    }
    else {
        printf("1");
    }

}