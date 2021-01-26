#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0); ios::sync_with_stdio(0);
    int arr[1001] = {0, 1, 2};
    int n; cin >> n;
    for (int i = 3; i <= n; i++){
        arr[i] = (arr[i - 1] % 10007 + arr[i - 2] % 10007) % 10007;
    }
    cout << arr[n] % 10007 << '\n';
}
