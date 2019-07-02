#include <stdio.h>
/*
*	Accepted at second attempt
*/

void uno();
void dos();
void tres();
void cuatro();
void cinco();
void seis();
void siete();
void ocho();
void nueve();
void diez();

int main(){

	int casos, a, b, i, j;
	char line;
	scanf("%d",&casos);

	while(casos > 0){


		scanf("%d%d" ,&a ,&b);

		while(b > 0){

			if(a == 1)
				uno();

			else if (a == 2)
				dos();

			else if (a == 3)
				tres();

			else if (a == 4)
				cuatro();

			else if (a == 5)
				cinco();

			else if (a == 6)
				seis();

			else if (a == 7)
				siete();

			else if (a == 8)
				ocho();

			else if (a == 9)
				nueve();
			
			if( (b-1) > 0)
				printf("\n\n");
			else 
				printf("\n");
			b--;

		}
		if( casos > 1)
			printf("\n");
		casos--;
	}

}

void uno(){

	printf("1");
}

void dos(){
	printf("1\n");
	printf("22\n");
	printf("1");
}

void tres(){
	printf("1\n");
	printf("22\n");
	printf("333\n");
	printf("22\n");
	printf("1");
}

void cuatro(){
	printf("1\n");
	printf("22\n");
	printf("333\n");
	printf("4444\n");
	printf("333\n");
	printf("22\n");
	printf("1");
}

void cinco(){
	printf("1\n");
	printf("22\n");
	printf("333\n");
	printf("4444\n");
	printf("55555\n");
	printf("4444\n");
	printf("333\n");
	printf("22\n");
	printf("1");
}


void seis(){
	printf("1\n");
	printf("22\n");
	printf("333\n");
	printf("4444\n");
	printf("55555\n");
	printf("666666\n");
	printf("55555\n");
	printf("4444\n");
	printf("333\n");
	printf("22\n");
	printf("1");
}


void siete(){
	printf("1\n");
	printf("22\n");
	printf("333\n");
	printf("4444\n");
	printf("55555\n");
	printf("666666\n");
	printf("7777777\n");
	printf("666666\n");
	printf("55555\n");
	printf("4444\n");
	printf("333\n");
	printf("22\n");
	printf("1");
}

void ocho(){
	printf("1\n");
	printf("22\n");
	printf("333\n");
	printf("4444\n");
	printf("55555\n");
	printf("666666\n");
	printf("7777777\n");
	printf("88888888\n");
	printf("7777777\n");
	printf("666666\n");
	printf("55555\n");
	printf("4444\n");
	printf("333\n");
	printf("22\n");
	printf("1");	
}


void nueve(){
	printf("1\n");
	printf("22\n");
	printf("333\n");
	printf("4444\n");
	printf("55555\n");
	printf("666666\n");
	printf("7777777\n");
	printf("88888888\n");
	printf("999999999\n");
	printf("88888888\n");
	printf("7777777\n");
	printf("666666\n");
	printf("55555\n");
	printf("4444\n");
	printf("333\n");
	printf("22\n");
	printf("1");	
}