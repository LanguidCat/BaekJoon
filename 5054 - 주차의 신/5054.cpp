#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0); ios::sync_with_stdio(0);

    int t; cin >> t;
    for (int i = 0; i < t; i++){
        int n; cin >> n;
        int Max = 0, Min = 100;
        for (int j = 0; j < n; j++){
            int m; cin >> m;
            if (Max <= m) Max = m;
            if (Min >= m) Min = m;
        }
        cout << (Max - Min) * 2 << '\n';
    }
}
