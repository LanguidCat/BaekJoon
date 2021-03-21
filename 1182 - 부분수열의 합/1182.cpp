#include <iostream>
using namespace std;

int N, S, rslt = 0;
int arr[20] = {};


void solve(int idx, int SUM){
    SUM += arr[idx];
    if (idx >= N)
        return;
    if (SUM == S)
        rslt++;
    solve(idx+1, SUM - arr[idx]);
    solve(idx+1, SUM);

}


int main(){
    cin.tie(0); ios::sync_with_stdio(0);
    cin >> N >> S;
    for (int i = 0; i < N; i++)
        cin >> arr[i];
    solve(0, 0);
    cout << rslt << '\n';
    return 0;
}