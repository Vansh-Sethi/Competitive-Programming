/* 
By. Vansh Sethi
MAIN CONCEPT = Nested Loops O(N^3)
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
   
    int ans = 0;
    for (int i = 0; i < s.length(); i++) {
        for (int j = i; j < s.length(); j++) {
            for (int k = j; k < s.length(); k++) {
                if (s[i] == 'Q' && s[j] == 'A' && s[k] == 'Q') {
                    ans++;
                }
            }
        }
    }
    printf("%d",ans);
}


