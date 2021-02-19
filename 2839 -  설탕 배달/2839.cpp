#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0); ios::sync_with_stdio(0);
    int n; cin >> n;
    int cnt = 0;

    while (n > 0){
        if (n % 5 == 0){
            n -= 5;
            cnt++;
        }
        else if (n % 3 == 0){
            n -= 3;
            cnt++;
        }
        else if (n > 5){
            n -= 5;
            cnt++;
        }
        else{
            cnt = -1;
            break;
        }
    }

    cout << cnt << '\n';

    return 0;
}
