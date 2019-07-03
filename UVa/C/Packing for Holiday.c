#include <stdio.h>

/*Accepted. I do not know what do this code*/
int main(){

	int casos, i, a, b, c;

	scanf("%d",&casos);

	for(i = 0; i < casos; i++){

		scanf("%d %d %d",&a, &b, &c);

		if((a <= 20) && (b <= 20)  && (c <= 20))
			printf("Case %d: good\n", (i+1) );

		else
			printf("Case %d: bad\n", (i+1) );

	}

	return 0;
}