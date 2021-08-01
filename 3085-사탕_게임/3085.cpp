#include <bits/stdc++.h>
using namespace std;

string board[50];
int N;

int count(){
    int rslt = 1;
    for (int i = 0; i < N; i++){
        int tmp = 1;
        for (int j = 1; j < N; j++){
            if (board[i][j - 1] == board[i][j])
                tmp++;
            else{
                rslt = max(rslt, tmp);
                tmp = 1;
            }
        }
        rslt = max(rslt, tmp);
    }

    for (int i = 0; i < N; i++){
        int tmp = 1;
        for (int j = 1; j < N; j++){
            if (board[j - 1][i] == board[j][i])
                tmp++;
            else{
                rslt = max(rslt, tmp);
                tmp = 1;
            }
        }
        rslt = max(rslt, tmp);
    }

    return rslt;
}

int main(){
    cin.tie(0); ios::sync_with_stdio(0);

    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> board[i];
    
    int rslt = 0;

    for (int i = 0; i < N; i++){
        for (int j = 0; j < N - 1; j++){
            int tmp = 0;
            swap(board[i][j], board[i][j + 1]);
            tmp = count();
            swap(board[i][j], board[i][j + 1]);
            rslt = max(rslt, tmp);
        }
    }

    for (int i = 0; i < N - 1; i++){
        for (int j = 0; j < N; j++){
            int tmp = 0;
            swap(board[i][j], board[i + 1][j]);
            tmp = count();
            swap(board[i][j], board[i + 1][j]);
            rslt = max(rslt, tmp);
        }
    }

    cout << rslt << '\n';
    return 0;
}
