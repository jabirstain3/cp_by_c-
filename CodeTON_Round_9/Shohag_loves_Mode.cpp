
#include <bits/stdc++.h>
using namespace std;

void sequence(int n, int s[]) {
    int c = 1;

    for (int i = 1; i <= n; ++i) {
        while (true) {
            bool isValid = true;
            for (int j = 1; j < i; ++j) { 
                if (c % i == s[j - 1] % j) {
                    isValid = false;
                    break;
                }
            }
            if (isValid && (i == 1 || c > s[i - 2])) {
                s[i - 1] = c;
                break;
            }
            c++; 
        }
    }
}

int main() {
    int t;
    cin >> t; 

    while (t--) {
        int n;
        cin >> n;
        int s[50];

        sequence(n, s);
        for (int i = 0; i < n; ++i) {
            cout << s[i] << endl;
        }
        cout << endl;
    }
    return 0;
}