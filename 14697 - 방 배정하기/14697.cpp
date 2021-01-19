#include <iostream>
#define endl '\n'

using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int A, B, C, N; cin >> A, B, C, N;
    int ans = 0;

    for (int i = 0; i <= N; i += A){
        for (int j = 0; j <= N; j += B){
            for (int k = 0; k <= N; k += C){
                if (i + j + k == N) ans = 1;
            }
        }
    }
    cout << ans << endl;
}
