#include <stdio.h>
/*Accepted*/

int main(){

	int a, b, c, j, farmers, suma = 0;

	scanf("%d",&j);

	while(j > 0){

		scanf("%d", &farmers);

		while(farmers > 0){

			scanf("%d %d %d",&a, &b, &c);		
			suma+=(a*c);
			farmers--;

		}
		printf("%d\n", suma);
		suma = 0;
		j--;
	}

	return 0;
}