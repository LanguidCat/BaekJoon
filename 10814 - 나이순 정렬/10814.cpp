#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <algorithm>
#define endl '\n'

using namespace std;

int main(){
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	//first.first = 나이, first.second = 순서, second = 이름 
	vector< pair< pair< int, int >, string > > v;
	int N, num = 0;
	cin >> N;
	
	for(int i = 0; i < N; i++){
		int age;
		string name;
		num++;
		
		cin >> age >> name;
		
		v.push_back(make_pair(make_pair(age, num), name));
	}
	
	sort(v.begin(), v.end());
	
	for(int i = 0; i < N; i++){
		cout << v[i].first.first << ' ' << v[i].second << endl;
	}
	
	return 0;
}
