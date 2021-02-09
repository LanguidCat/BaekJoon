#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    return b ? gcd(b, a % b) : a;
}

int main(){
    cin.tie(0); ios::sync_with_stdio(0);
    
    int t; cin >> t;
    
    for (int i = 0; i < t; i++){
        long long sum = 0;
        int n; cin >> n;
        int arr[100] = {};
        for (int j = 0; j < n; j++) 
            cin >> arr[j];

        for (int j = 0; j < n - 1; j++){
            for (int k = j + 1; k < n; k++){
                sum += gcd(max(arr[j], arr[k]), min(arr[j], arr[k]));
            }
        }
        cout << sum << '\n';
    }
}
