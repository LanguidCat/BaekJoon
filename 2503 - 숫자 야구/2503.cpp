#include <iostream>
using namespace std;

int strike(int n, int N){
    int rslt = 0;

    if (n % 10 == N % 10) rslt++;
    if ((n / 10) % 10 == (N / 10) % 10) rslt++;
    if (n / 100 == N / 100) rslt++;

    return rslt;
}

int ball(int n, int N){
    int arr1[3] = {n / 100, (n / 10) % 10, n % 10};
    int arr2[3] = {N / 100, (N / 10) % 10, N % 10};
    int rslt = 0;

    if (arr1[0] == arr2[1] || arr1[0] == arr2[2]) rslt++;
    if (arr1[1] == arr2[0] || arr1[1] == arr2[2]) rslt++;
    if (arr1[2] == arr2[0] || arr1[2] == arr2[1]) rslt++;

    return rslt;
}

int main(){
    cin.tie(0); ios::sync_with_stdio(0);

    // 123부터 999까지 배열 만들기 
    int arr[889] = {};
    int a = 123;
    for (int i = 0; i < 889; i++){
        int a1 = a / 100;
        int a2 = (a / 10) % 10;
        int a3 = a % 10;
        
        if (a1 == 0 || a2 == 0 || a3 == 0){
            arr[i] = -1;
        }
        else if (a1 == a2 || a1 == a3 || a2 == a3){
            arr[i] = -1;
        }
        else{
            arr[i] = a;
        }
        a++;
    }
    
    // 스트라이크와 볼 갯수 비교하여 다르면 제외 
    int n; cin >> n;
    for (int i = 0; i < n; i++){
        int N, s, b; cin >> N >> s >> b;
        for (int j = 0; j < 889; j++){
            if (arr[j] != -1){
                int S = strike(arr[j], N);
                int B = ball(arr[j], N);
                if (s != S || b != B)
                    arr[j] = -1;
            }
        }
    }

    int rslt = 0;
    for (int i = 0; i < 889; i++){
        if (arr[i] != -1)
            rslt++;
    }
    cout << rslt << '\n';
    return 0;
}
