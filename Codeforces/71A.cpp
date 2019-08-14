#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    scanf("%d",&n);
    string arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        string current = arr[i];
        if (current.length() > 10) {
            int p = current.length();
            int o = p- 2;
            cout << current[0] << o << current[p-1] << "\n";
        }
        else {
            cout << current << "\n";
        }
    }
    
}