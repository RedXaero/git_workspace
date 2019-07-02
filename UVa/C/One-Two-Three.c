#include <stdio.h>
/*Accepted*/
int main(){

	char cad[20];
	int i, cont, casos;

	scanf("%d",&casos);
	getchar();

	while(casos > 0){
		scanf("%s",&cad[0]);

		for(i = 0; cad[i] != '\0'; i++);
		if(i > 4)
			printf("3\n");
		else if (i < 5){
			if( (cad[0] == 'o') && (cad[1] == 'n') && (cad[2] == 'e'))
				printf("1\n");

			else if((cad[0] == 'o') && (cad[1] != 'n') && (cad[2] == 'e'))
				printf("1\n");

			else if((cad[0] == 'o') && (cad[1] == 'n') && (cad[2] != 'e'))
				printf("1\n");

			else if((cad[0] != 'o') && (cad[1] == 'n') && (cad[2] == 'e'))
				printf("1\n");
			else if((cad[0] == 't') && (cad[1] == 'w') && (cad[2] == 'o'))
				printf("2\n");

			else if((cad[0] == 't') && (cad[1] != 'w') && (cad[2] == 'o'))
				printf("2\n");

			else if((cad[0] == 't') && (cad[1] == 'w') && (cad[2] != 'o'))
				printf("2\n");

			else if((cad[0] != 't') && (cad[1] == 'w') && (cad[2] == 'o'))
				printf("2\n");
		}
		--casos;
	}

	return 0;

}