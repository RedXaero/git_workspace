#include <stdio.h>
/*Aceptado y sin hacer tantas chingaderas*/

void busca(int *, int *, int *);
void imprimir(int *, int *, char [10][100]);

int main(){

	int cad[10],cad2[10], i, times, *prtC1, *ptrC2, j, *ptrJ, x;
	char vec[10][100];
	prtC1 = &cad[0];
	ptrC2 = &cad2[0];
	ptrJ  = &j;

	scanf("%d", &times);
	getchar();

	for(x = 0; x < times; x++){

		for(i = 0; i < 10; i++){
			scanf("%s", &vec[i][0]);
			scanf(" %d", &cad[i]);
		}
		printf("Case #%d:\n",(x+1));
		busca(prtC1, ptrC2, ptrJ);
		imprimir(ptrC2, ptrJ, vec);
	}
	
	return 0;
}


void busca(int *a, int *b, int *c){

	int i, max = -9999, j = 0;;

	for(i = 0; i < 10; i ++){
		if(a[i] >= max)
			max = a[i];
	}

	for(i = 0; i < 10; i ++){
		if(a[i] == max){
			b[j] = i;
			j++;
		}
	}

	(*c) = j;

}

void imprimir(int *a, int *tam, char vec[10][100]){
	int i, dir;

	for(i = 0; i < (*tam); i++){
		dir = a[i];
		printf("%s\n", vec[dir]);
	}
}