#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m; cin >> n >> m;
    int arr[n] = {};
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    int max = 0;
    for (int i = 0; i < n - 2; i++){
        for (int j = i + 1; j < n - 1; j++){
            for (int k = j + 1; k < n; k++){
                int tmp = arr[i] + arr[j] + arr[k];
                if (tmp <= m && tmp > max)
                    max = tmp;
            }
        }
    }

    cout << max << '\n';
    return 0;
}
