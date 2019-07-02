#include <stdio.h>
/*Accepted*/

int main(){

	int i = 1, j;
	char arr[1024];

	while(scanf("%s",&arr[0]) != EOF){

		
		for( j = 0; arr[j] != '\0'; j++){

			if( arr[j] == '"'){
				if( (i % 2) == 1)
					printf("``");
				else
					printf("''");
				i++;
			}
			else
				printf("%c",arr[j]);
			
		}
		printf("\n");
	

	}

	return 0;
}
