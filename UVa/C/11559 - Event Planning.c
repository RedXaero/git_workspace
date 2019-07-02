#include <stdio.h>
/*Accepted*/

int main(){

	long long N, B, H, W, P, a, i, j, min = 999999999999;
	int flag1 = 0, flag2 = 0;

	while(scanf("%lld %lld %lld %lld", &N, &B, &H, &W) == 4){

		for(i = 0; i < H; i++){
			scanf("%lld", &P);

			for(j = 0; j < W; j++){
				scanf("%lld", &a);
				if( (a >= N) && ((P*N) <= B)){
					
					if((P*N) <= min){
						flag1 = 1;
						flag2 = 1;
						min = P*N;
					
					}
				}
			}
		}

		if( (flag2 == 1) && (flag1 == 1))
			printf("%lld\n",min);
		else
			printf("stay home\n");

		flag2 = 0;
		flag1 = 0;
		min = 999999999999;

	}
	return 0;

}
