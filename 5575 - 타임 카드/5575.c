#include <stdio.h>

int main(){
    for(int i=0; i<3; i++){
        int h, m, s, H, M, S, rh, rm, rs;
        scanf("%d %d %d %d %d %d", &h, &m, &s, &H, &M, &S);
	rh = H-h;
	if(M-m<0){
	    rh -= 1;
	    rm = 60-(m-M);
	}
	else rm = M-m;
	if(S-s<0){
	    rm -= 1;
	    if(rm<0){
                rh -= 1;
		rm = 60+rm; // 0분 0초에서 초 단위로 줄어들 경우 
	    }
	    rs = 60-(s-S);
	}
	else rs = S-s;
	printf("%d %d %d \n", rh, rm, rs);
    }
}
