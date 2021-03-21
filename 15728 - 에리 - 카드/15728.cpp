#include <iostream>
using namespace std;

int main(){
    int N, K; cin >> N >> K;
    int share[100], team[100];
    for (int i = 0; i < N; i++)
        cin >> share[i];
    for (int i = 0; i < N; i++)
        cin >> team[i];
    
    for (int i = 0; i <= K; i++){
        int MAX = -100000001, idx = 0;
        for (int j = 0; j < N; j++){
            for (int k = 0; k < N-i; k++){
                if (MAX < share[j] * team[k]){
                    MAX = share[j] * team[k];
                    idx = k;
                }
            }
        }
        if (i == K){
            cout << MAX << '\n';
            return 0;
        }

        int tmp = team[N-i-1];
        team[N-i-1] = team[idx];
        team[idx] = tmp;
    }
}