#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    char arr[n + 1] = {};

    cin >> arr;

    int idx = 0;
    for (int i = 0; i < n; i++){
        char a; cin >> a;
        if (a == arr[i]) idx++;
    }

    cout << idx << '\n';

    return 0;
}
