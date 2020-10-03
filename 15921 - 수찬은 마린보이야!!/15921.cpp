#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> v;
    double N, average = 0, sum = 0, expect = 0;
    cin >> N;
    if(N==0){
        cout << "divide by zero";
        return 0;
    }
    for(int i = 0; i < N; i++){
        int temp;
	cin >> temp;
	sum += temp;
	v.push_back(temp);
    }
    average = sum / N;
	
    // 기댓값 산출 
    for(int i = 0; i < N; i++){
        expect += v[i] / N;
    }
    if(expect == 0){
        cout << "divide by zero";
        return 0;
    }
    // 출력 
    else printf("%.2f", average / expect);
}
