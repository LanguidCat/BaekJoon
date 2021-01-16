#include <iostream>
#include <algorithm>
#include <vector>
#define endl '\n'

using namespace std;

int main(){
    vector <int> v1;
    vector <int> v2;
    int sum = -100;
    int a, b, flag = 0;

    for (int i = 0; i < 9; i++){
        int tmp;
        cin >> tmp;
        sum += tmp;
        v1.push_back(tmp);
    }
    // 가짜 a와 b 찾기
    for (int i = 0; i < 8; i++){
        for (int j = 1; j < 9 - i; j++){
            if (sum == v1[i] + v1[i + j]){
                a = v1[i];
                b = v1[i + j];
                flag = 1;
                break;
            }
        }
        if (flag == 1) break;
    }

    // a와 b를 제외하고 오름차순으로 출력하기
    for (int i = 0; i < 9; i++){
        if (v1[i] != a && v1[i] != b){
            v2.push_back(v1[i]);
        }  
    }
    sort(v2.begin(), v2.end());
    for (int i = 0; i < 7; i++) cout << v2[i] << endl;
}
