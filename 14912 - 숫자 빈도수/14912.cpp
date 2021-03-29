#include <iostream>

using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n, d; cin >> n >> d;
    int ans = 0;
    for (int i = 1; i <= n; i++){
        int a = i;
        while (a){
            if (a % 10 == d) ans++;
            a /= 10;
        }
    }
    cout << ans << '\n';
}
