#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0); ios::sync_with_stdio(0);
    
    int a, b;
    string c;
    cin >> a >> b >> c;

    if ((c[c.size() - 1] - '0') % 2 == 0) cout << a << '\n';
    else cout << (a^b) << '\n';
}
