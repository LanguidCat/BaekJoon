#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

int main(){
    string s;
    cin >> s;
    vector < pair <int, char> > v;
    // 전부 대문자로 바꾸기
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 97) s[i] -= 32;
    }
    // 중복은 카운트를 올릴 것
    // 중복이 아닌 건 새로 추가 
    v.push_back(make_pair(1, s[0]));
    for(int i = 1; i < s.size(); i++){
        int temp = 0;
	for(int j = 0; j < v.size(); j++){
	    if(s[i] == v[j].second){
	        v[j].first++;
	        temp++;
	        break;
	    }
	}
        if(temp == 0){
	    v.push_back(make_pair(1 , s[i]));
	}
    }
    // 출력  
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    if(v[0].first == v[1].first) cout << "?";
    else cout << v[0].second;
}
