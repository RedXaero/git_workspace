#include <stdio.h>

int main(){

    char string[1001];
    int i, contador = 0;

    while(fgets(string, 1001, stdin)){
        i = 0;
        contador = 0;
        for(int j = 0; string[j] != '\0'; j++){
            if(string[j] != '\n'){
                if(string[j] != ' '){/*
                    if( (string[j]>= 'a' && string[j]<= 'z') || (string[j]>= 'A' && string[j]<= 'Z')){
                        contador++;
                    }*/
                    printf("%c", string[j]);
                }
                else{
                    printf("\n");
                }
            }
        }
        printf("%d", contador);
        contador = 0;
            
    }

    return 0;
}

