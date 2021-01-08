#include <iostream>
#define endl '\n'

using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int B;
        cin >> B;

        if(B <= 2){
            for(int j = 0; j < B; j++){
                for(int k = 0; k < B; k++){
                    cout << "#";
                }
                cout << endl;
            }
            cout << endl;
        }

        else{
            for(int j = 0; j < B; j++) cout << "#";
            cout << endl;
            for(int j = 0; j < B - 2; j++){
                cout << "#";
                for(int k = 0; k < B - 2; k++) cout << "J";
                cout << "#" << endl;
            }
            for(int j = 0; j < B; j++) cout << "#";
            cout << endl << endl;
        }
    }
}
