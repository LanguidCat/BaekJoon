#include <bits/stdc++.h>
using namespace std;
const int MAX = 1000000;

int main(){
    cin.tie(0); ios::sync_with_stdio(0);

    int M, N; cin >> M >> N;
    bool isPrime[MAX + 1];
    vector <int> prime;
    fill(isPrime + 2, isPrime + MAX + 1, true);
    
    for (int i = 2; i <= N; i++){
        if (isPrime[i]) 
            prime.push_back(i);
        for (int j = i * 2; j <= N; j += i)
            isPrime[j] = false;
    }
    for (int i = M; i <= N; i++){
        if (isPrime[i])
            cout << i << '\n';
    }
    return 0;
}
