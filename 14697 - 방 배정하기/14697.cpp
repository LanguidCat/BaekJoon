#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c, n; cin >> a >> b >> c >> n;
    int ans = 0;
    for(int i = 0 ; i <= n ; i += a){
        for(int j = 0 ; j <= n ; j += b){
            for(int k = 0 ; k <= n ; k += c){
                if(i + j + k == n) ans = 1;
            }
        }
    }
    cout << ans;
}
