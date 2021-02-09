#include <bits/stdc++.h>
using namespace std;

int Euc(int a, int b){
    return b ? Euc(b, a % b) : a;
}

int Max(int a, int b){
    int start = a;
    while (start % a || start % b){
        start++;
    }
    return start;
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

    cout << Euc(A, B) << '\n' << Max(A, B) << '\n';
}
