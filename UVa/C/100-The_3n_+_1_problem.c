#include <stdio.h>

/**
Accepeted after five years
*/
int main(){

	unsigned int a, b, cont, max = 0, c;
	unsigned int a1, b1, i, n;
	

	while(scanf("%d %d", &a, &b) != EOF){
		a1 = a;
		b1 = b;

		if(a > b){
			c = a;
			a = b;
			b = c;
		}

		cont = 0;

		for(i = a; i <= b; i++){
			n = i;

			while( n != 1){

				if( (n%2) == 1)
					n = 3 * n + 1;

				else
					n /= 2;

				cont++;
			}

			if(cont > max)
				max = cont;

			cont = 0;
		}

		printf("%d %d %d\n", a1, b1,++max);

		max = 0;
	}

	



	return 0;
}