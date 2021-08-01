#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    return b ? gcd(b, a % b) : a;
}

int main(){
    cin.tie(0); ios::sync_with_stdio(0);
    
    int a, b; cin >> a >> b;
    int A, B;

    if (a >= b){
        A = a; B = b;
    }
    else{
        A = b; B = a;
    }

    cout << gcd(A, B) << '\n' << A * B / gcd(A, B) << '\n';
}
