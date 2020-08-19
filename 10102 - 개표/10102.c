#include <stdio.h>
int main(){
	int V, A=0, B=0;
	scanf("%d", &V);
	char vote[V] = {}; scanf("%s", vote);
	for(int i=0; i<V; i++){ // A와 B의 득표수를 채점 
		char tmp = vote[i];
		if(tmp=='A') A++;
		else if(tmp=='B') B++;
	}
	if(A>B) printf("A");
	else if(B>A) printf("B");
	else printf("Tie");
}
