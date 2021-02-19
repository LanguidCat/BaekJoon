#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0); ios::sync_with_stdio(0);
    int n; cin >> n;
    int a = 9999, b = 0, c = 0, tmp = n;

    if (n % 3 == 0){
        a = n / 3;
    }
    
    if (n % 5 == 0){
        a = n / 5;
    }

    if (n < 5){
        b = 9999;
    }
    else{
        while (tmp >= 1){
            tmp -= 5;
            b++;
            
            if (tmp % 3 == 0){
                b += tmp / 3;
                break;
            }
        }

        if (tmp < 0)
            b = 9999;
    }

    tmp = n;
    while (tmp >= 1){
        tmp -= 3;
        c++;

        if (tmp % 5 == 0){
            c += tmp / 5;
            break;
        }
    }

    if (tmp < 0)
        c = 9999;

    if (a == 9999 && b == 9999 && c == 9999){
        cout << -1 << '\n';
    }
    else{
        cout << min({a, b, c}) << '\n';
    }

    return 0;
}
