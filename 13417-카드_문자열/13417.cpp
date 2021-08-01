#include <iostream>
#include <deque>

using namespace std;

int main(){
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int T;
	cin >> T;

	for(int i = 0; i < T; i++){
		int N;
		cin >> N;
		deque<char> dq;

		for(int j = 0; j < N; j++){
			char c;
			cin >> c;

			if(dq.empty()){
				dq.push_front(c);
			}
			else if(dq.front() < c){
				dq.push_back(c);
			}
			else{
				dq.push_front(c);
			}
		}

		for(int j = 0; j < dq.size(); j++){
			cout << dq[j];
		}
		cout << '\n';
	}
}
