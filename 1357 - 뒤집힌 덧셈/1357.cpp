#include <bits/stdc++.h>
using namespace std;

int Rev(int n){
    int NUM = 0;
    while (n){
        NUM *= 10;
        NUM += n % 10;
        n /= 10;
    }
    return NUM;
}

int main(){
    int x, y; cin >> x >> y;
    cout << Rev(Rev(x) + Rev(y)) << '\n';
    return 0;
}
