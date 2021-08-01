#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0); ios::sync_with_stdio(0);

    int t; cin >> t;
    for (int i = 0; i < t; i++){
        int n;
        string s;
        cin >> n >> s;
        for (int j = 0; j < s.length(); j++){
            if (j == n - 1) continue;
            else cout << s[j];
        }
        cout << '\n';
    }
}
