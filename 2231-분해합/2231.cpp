#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int rslt = n;

    for (int i = n - 1; i > 0; i--){
        int tmp = i, sum = i;
        while (tmp){
            sum += tmp % 10;
            tmp /= 10;
        }
        if (sum == n && rslt > i)
            rslt = i;
    }
    if (rslt == n){
        cout << '0' << '\n';
    }
    else{
        cout << rslt << '\n';
    }
    return 0;
}
