#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0); ios::sync_with_stdio(0);

    int w = 0; 
    vector <string> v;

    for (int i = 0; i < 8; i++){
        string s; cin >> s;
        v.push_back(s);
    }
        
    for (int i = 0; i < 8; i += 2){
        for (int j = 0; j < 8; j += 2){
            if (v[i][j] == 'F')
                w++;
        }
    }

    for (int i = 1; i < 8; i += 2){
        for (int j = 1; j < 8; j += 2){
            if (v[i][j] == 'F')
                w++;
        }
    }

    cout << w << '\n';
    return 0;
}
