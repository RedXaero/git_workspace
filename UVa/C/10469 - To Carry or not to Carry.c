#include <stdio.h>
/**+
Aceptado al primer intento
*/

int main(){

	unsigned long  long   n1, n2;
	
	while( (scanf("%lld %lld", &n1, &n2)) != EOF ){
		printf("%lld\n", (n1 ^ n2));
	}
	
	return 0;

}
