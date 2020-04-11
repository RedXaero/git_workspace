//
// Created by eli on 10/04/20.
//

#include <stdio.h>
void separa(char [], int, int);

int main(){

    int i,j;
    char cad[2000];

    i = j = 0;
    while(fgets(cad, 2000, stdin) != NULL)
    {
        while( (cad[j] =! ' ') && (cad[j] != '\0'))
            ++j;
        separa(cad, i,j);
    }
    return 0;
}

void separa(char *cad, int i, int j){
    int cont;
    char aux;
    aux = &cad[i];



}