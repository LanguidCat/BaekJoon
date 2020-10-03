#include <iostream>
#include <vector>
#define endl '\n'
using namespace std;

int main(){
    int C;
    cin >> C;
    for(int i = 0; i < C; i++){
    	int N, sum = 0, num = 0;
    	double average, result; 
    	vector <int> v;
    	cin >> N;
    	
        // 성적 입력받아 합을 구하고 v에 저장  
	for(int j = 0; j < N; j++){
    	    int score;
    	    cin >> score;
            sum += score;
    	    v.push_back(score);
	}
		
	// 평균 구하고 학생 비율 출력 
	average = sum / N;
	for(int j = 0; j < N; j++){
	    if(v[j] > average) num++;
	}
	result = (double)num / N * 100;
	printf("%.3f%% \n", result);
    }
}
