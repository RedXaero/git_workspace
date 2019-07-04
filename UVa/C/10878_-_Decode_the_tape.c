#include <stdio.h>

/**
Accepted
*/
int main(){

	char vec[30];
	int i = 0;



	gets(vec);

	while(gets(vec)){
		
		if(vec[1] == 'o')
			i+= 128;

		if(vec[2] == 'o')
			i+= 64;

		if(vec[3] == 'o')
			i+= 32;

		if(vec[4] == 'o')
			i+= 16;

		if(vec[5] == 'o')
			i+= 8;

		if(vec[7] == 'o')
			i+= 4;

		if(vec[8] == 'o')
			i+= 2;

		if(vec[9] == 'o')
			i+= 1;

		if(i == 10)
			printf("\n");
		else
			printf("%c", i);
		i = 0;


	}

	

	

	return  0;

}