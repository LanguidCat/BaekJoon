#include <iostream>
#include <vector>
#define endl '\n';
using namespace std;

int main(){
	vector <int> v1(3);
	vector <int> v2(3);
	int year, man, se, yeon;
	scanf("%d %d %d", &v1[0], &v1[1], &v1[2]);
	scanf("%d %d %d", &v2[0], &v2[1], &v2[2]);
	year = v2[0] - v1[0];
	
	// 만 나이
	// 생일이 지남 
	if(v2[1] > v1[1]){
		man = year;
	}
	else if(v2[1] == v1[1] && v2[2] >= v1[2]){
		man = year;
	}
	else man = year - 1;
	cout << man << endl;
	
	// 세는 나이
	se = year + 1;
	cout << se << endl;
	
	// 연 나이
	yeon = year;
	cout << yeon;
}
