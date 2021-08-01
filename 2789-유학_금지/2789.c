#include <stdio.h>
int main(){
	char censr[ ] = "CAMBRIDGE";
	char inpt[101] = {}; scanf("%s", inpt);
	for(int i=0; inpt[i]!=0; i++){
		int tmp = inpt[i];
		for(int j=0; j<9; j++){
			if(tmp==censr[j]) inpt[i] = -1; //검열!! 
			else continue;
		}
	}
	for(int i=0; inpt[i]!=0; i++){
		if(inpt[i]!=-1) printf("%c", inpt[i]); //출력 
		else continue;
	}
}
