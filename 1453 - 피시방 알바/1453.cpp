#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0); ios::sync_with_stdio(0);

    // 0이 비어 있는 자리, 1이 찬 자리 
    int arr[101] = {};
    int n; cin >> n;
    int ban = 0;
    for (int i = 0; i < n; i++){
        int m; cin >> m;
        if (arr[m] == 0) arr[m] = 1;
        else ban++;
    }
    cout << ban << '\n';
}
