#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    
    int A[100001] = {};
    int N; cin >> N;
    for (int i = 0; i < N; i++){
        cin >> A[i];
    }
    sort(A, A + N);

    int M; cin >> M;
    for (int i = 0; i < M; i++){
        int a; cin >> a;
        int lo = -1, hi = N;
        while (lo + 1 < hi){
            int mid = (lo + hi) / 2;
            if (a > A[mid]) lo = mid;
            else hi = mid;
        }
        if (a == A[hi]) cout << 1 << '\n';
        else cout << 0 << '\n';
    }
}
