#include <iostream>
#include <queue>

using namespace std;

int main(){
	int N;
	cin >> N;
	queue <int> I;
	while(1){
		int i;
		cin >> i;
		
		if(i == -1){ // -1은 입력의 끝 
			break;
		}
		else if(i == 0){ // 0은 라우터가 패킷 하나를 처리 
			I.pop();
		}
		else{
			if(I.size() == N){ // 라우터가 가득 차있는 경우 
				continue;
			}
			else{
				I.push(i); 
			}
		}
	}
	
	if(I.empty()){ // 라우터가 비어있는 경우  
		cout << "empty";
	}
	else{ // 패킷 출력 
		for(int i = 0; !I.empty(); i++){
			cout << I.front() << ' ';
			I.pop();
		}
	}
}
