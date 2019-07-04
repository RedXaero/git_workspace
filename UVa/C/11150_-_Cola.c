#include <stdio.h>
#include <math.h>

/**
Accepted
*/

void div(int *, int*, int*);
int main()
{

	int N, aux, suma = 0;
	

	while( (scanf("%d", &N)) != EOF)
	{
		if(N == 1)
			suma = 1;

		else if(N % 2)
		{
			div(&N, &aux, &suma);
			suma +=  N;
			suma--;
		}
		else
		{
			++N;
			div(&N, &aux, &suma);
			--suma;
		}
		
		printf("%d\n", suma);
		suma = 0;
	}
	return 0;
}

void div(int *N, int *aux, int *suma){

	while( (*N)!= 1 || (*aux) != 0)
			{
				(*aux) = (*N) % 3;
				(*N) = floor((*N) /3);
				(*suma)+=((*N)*3);
				(*N) += (*aux);
			}
			(*suma) +=  (*N);
}
