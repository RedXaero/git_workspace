#include <stdio.h>
/*Accepted*/

int main(){

	long a,b;

	while( scanf("%ld %ld",&a ,&b) != EOF )
		printf("%ld\n", ((a * b) * 2));
	

	return 0;
}