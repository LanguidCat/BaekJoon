#include <bits/stdc++.h>
using namespace std;

int prime(int n){
    for (int i = 2; i < n; i++)
        if (n % i == 0) return 0;
    return 1;
}

int main(){
    cin.tie(0); ios::sync_with_stdio(0);
    
    int t; cin >> t;
    int sum = 0;
    for (int i = 1; i < t + 1; i++){
        int N; cin >> N;
        if (N == 1){
            continue;
        }
        
        else if (N == 2){
            sum += 1;
        }
        
        else{
            int tmp = prime(N);
            if (tmp == 1)
                sum += 1;
        }
    }
    cout << sum << '\n';
}
