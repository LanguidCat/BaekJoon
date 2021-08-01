#include <iostream>
using namespace std;

int han(int n){
    if (n < 100)
        return n;
    else{
        int rslt = 0, hnd, ten, one;
        for (int i = 100; i <= n; i++){
            hnd = i / 100;
            ten = (i % 100) / 10;
            one = i % 10;
            if ((hnd - ten) == (ten - one))
                rslt++;
        }
        return rslt + 99;  // 세 자릿수 미만의 한수는 99개 
    }
}
int main(){
    cin.tie(0); ios::sync_with_stdio(0);
    int n; cin >> n;
    cout << han(n) << '\n';

    return 0;
}
