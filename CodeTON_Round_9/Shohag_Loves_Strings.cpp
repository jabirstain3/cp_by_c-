#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; 

    while (t--) {
        string s;
        cin >> s;

        int n = s.size();
        bool a = false;
        for (int i = 0; i < n - 1; ++i) {
            if (s[i] == s[i + 1]) {
                cout << s.substr(i, 2) << endl;
                a = true;
                break;
            }
        }
        if (!a) {
            cout << -1 << endl;
        }
    }
    return 0;
}