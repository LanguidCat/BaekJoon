#include <iostream>
#define endl '\n'

using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n; cin >> n;
    int ans = 0;
    for (int i = 3; i <= 3000; i += 3){
        for (int j = 3; j <= 3000; j += 3){
            if ((n - i - j) % 3 == 0 && (n - i - j) >= 3) ans++;
        }
    }
    cout << ans << endl;
}
