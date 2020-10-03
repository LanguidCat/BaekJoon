#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> v1(3);
	vector <int> v2(3);
	int sec = 0;
    scanf("%d : %d : %d", &v1[0], &v1[1], &v1[2]);
    scanf("%d : %d : %d", &v2[0], &v2[1], &v2[2]);
    
    // 초 범위 계산 
	if(v1[2] > v2[2]){
		if(v2[1] == 0){
			if(v2[0] == 0){
				v2[0] = 23;
			}
			else v2[0]--;
			v2[1] += 59;
			sec += 60 + (v2[2] - v1[2]);
		}
		else{
			v2[1]--;
	        sec += 60 + (v2[2] - v1[2]);
		}
	}
	else sec += v2[2] - v1[2];
	
	// 분 범위 계산
	if(v1[1] > v2[1]){
		if(v2[0] == 0){
			v2[0] = 23;
		}
		else v2[0]--;
		sec += (60 + (v2[1] - v1[1])) * 60;
	}
	else sec += (v2[1] - v1[1]) * 60;
	
	// 시 범위 계산
	if(v1[0] > v2[0]){
		sec += (24 + (v2[0] - v1[0])) * 3600;
	}
	else sec += (v2[0] - v1[0]) * 3600;
	
	// 출력
	cout << sec; 
}
