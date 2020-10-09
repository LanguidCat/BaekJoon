#include <iostream>
#include <stack>
#include <string>
#define endl '\n'

using namespace std;

int main(){
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	stack <int> s;
	int K, sum = 0;
	cin >> K;
	
	for(int i = 0; i < K; i++){
		int temp;
		cin >> temp;
		
		if(temp == 0){
			s.pop();
		}
		else{
			s.push(temp);
		}
	}
	
	while(!s.empty()){
		sum += s.top();
		s.pop();
	}
	
	cout << sum;
	
	return 0;
}
