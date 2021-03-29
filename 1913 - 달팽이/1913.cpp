#include <bits/stdc++.h>
using namespace std;
int snail[1001][1001];
int main(){
    int n,a,dx[4] = {1,0,-1,0},dy[4] = {0,1,0,-1},x = 0,y = 0,ax,ay,idx = 0;
    cin >> n >> a;
    int temp = n*n;
    while(temp > 0){
        snail[x][y] = temp--;
        if(snail[x][y] == a) ax = x, ay = y;

        int nx = x + dx[idx];  // 1
        int ny = y + dy[idx];  // 0
        // 만약 범위를 벗어나거나 이미 있는 숫자에 겹치면 방향을 바꾼다 
        if(!(0 <= nx && nx < n && 0 <= ny && ny < n) || snail[nx][ny] != 0){ 
            idx = (idx+1)%4;
            nx = x + dx[idx];
            ny = y + dy[idx];
        }
        x = nx,y = ny;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++) cout << snail[i][j] << ' ';
        cout << '\n';
    }
    cout << ax+1 << ' ' << ay+1;
    return 0;
}
