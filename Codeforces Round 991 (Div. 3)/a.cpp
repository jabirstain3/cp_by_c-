#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >>t; 
    while(t--) {
        int n, m, ans = 0 , temp = 0;
        cin >> n >> m;
        string s[n];
        for(int i = 0; i < n; i++) {
            cin >> s[i];
            temp += s[i].length();
            if (temp <= m){
                ans += 1;
            }
        }
        cout <<ans <<endl;
    }
}