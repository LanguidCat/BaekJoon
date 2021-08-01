#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int T, N, M, tmp;
vector <int> note1, note2;

int binary_search(int target){
    int start = 0, end = note1.size() - 1;
    while (start <= end){
        int mid = (start + end) / 2;
        if (note1[mid] == target)
            return 1;
        else if (note1[mid] < target)
            start = mid + 1;
        else if (note1[mid] > target)
            end = mid - 1;
    }
    return 0;
}

void inpt(){
    note1.clear();
    note2.clear();
    cin >> N;
    for (int j = 0; j < N; j++){
        cin >> tmp;
        note1.push_back(tmp);
    }
    cin >> M;
    for (int j = 0; j < M; j++){
        cin >> tmp;
        note2.push_back(tmp);
    }
}

int main(){
    cin.tie(0); ios::sync_with_stdio(0);
    cin >> T;
    for (int i = 0; i < T; i++){
        inpt();
        sort(note1.begin(), note1.end());
        for (int i = 0; i < M; i++)
            cout << binary_search(note2[i]) << '\n';
    }
    return 0;
}