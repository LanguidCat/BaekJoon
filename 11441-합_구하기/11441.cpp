#include <iostream>
#include <vector>
#define endl '\n'

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N;
    vector < int > v;
    v.push_back(0);

    // 부분합 배열 만들기
    for(int i = 0; i < N; i++){
        int tmp;
        cin >> tmp;
        tmp += v[i];
        v.push_back(tmp);
    }

    // 구간의 합 구하기
    cin >> M;
    for(int i = 0; i < M; i++){
        int I, J;
        cin >> I >> J;
        cout << v[J] - v[I - 1] << endl;
    }
}
