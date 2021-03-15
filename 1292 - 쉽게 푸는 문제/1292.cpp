#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0); ios::sync_with_stdio(0);

    vector <int> v = {0};
    int a, b; cin >> a >> b;
    
    for (int i = 1; i < b + 1; i++){
        for (int j = 1; j < i + 1; j++){
            int tmp = v.back();
            v.push_back(tmp + i);
        }
    }

    cout << v[b] - v[a - 1] << '\n';
    return 0;
}
