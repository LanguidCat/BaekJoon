#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0); ios::sync_with_stdio(0);

    string s; cin >> s;
    for (int i = 0; i < s.length(); i++){
        char a;
        if ((s[i] - 3) < 'A') 
            a = 'X' + (s[i] - 'A');
        else 
            a = s[i] - 3;

        cout << a;
    }
    cout << '\n';
    return 0;
}
