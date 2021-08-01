#include <bits/stdc++.h>
using namespace std;
#define MAX 100

int N, K;
char MAP[MAX][MAX];


void inpt(){
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            cin >> MAP[i][j];
        }
    }
}


void prnt(){
    if (K == 1){
        for (int i = 0; i < N; i++){
            for (int j = 0; j < N; j++){
                cout << MAP[i][j];
            }
            cout << '\n';
        }
    }
    else if(K == 2){
        for (int i = 0; i < N; i++){
            for (int j = N - 1; j >= 0; j--){
                cout << MAP[i][j];
            }
            cout << '\n';
        }
    }
    else if(K == 3){
        for (int i = N - 1; i >= 0; i--){
            for (int j = 0; j < N; j++){
                cout << MAP[i][j];
            }
            cout << '\n';
        }
    }
}


int main(){
    cin >> N;
    inpt();
    cin >> K;
    prnt();
    return 0;
}
