#include <bits/stdc++.h>
using namespace std;

int fib(int n){
    if (n == 0) return 0;
    else if (n == 1) return 1;
    else if (n == 2) return 1;

    int a = 1, b = 1, c = 0;
    for (int i = 3; i <= n; i++){
        c = a + b;
        a = b;
        b = c;
    }

    return c;
}

int main(){
    cin.tie(0); ios::sync_with_stdio(0);
    int n; cin >> n;
    cout << fib(n) << '\n';
    return 0;
}
