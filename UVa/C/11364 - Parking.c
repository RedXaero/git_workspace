#include <stdio.h>
/*Accepted*/
int main(){

	int max = -9999 , min = 9999, i, j, op, tam;
	int vec[100];

	scanf("%d",&op);

	while(op > 0){

		scanf("%d",&tam);
		for(i = 0; i < tam; i++){
			scanf("%d",&vec[i]);
		}
		for(i = 0; i < tam; i++){
			if(vec[i] >= max)
				max = vec[i];
			if(vec[i] <= min)
				min = vec[i];
		}

		printf("%d\n",((max-min)*2));
		max = -9999;
		min = 9999;
		op--;
	}

	return 0;
}