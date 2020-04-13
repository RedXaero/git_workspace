#include <stdio.h>
int main(){
    int i;
    char cad[2000], aux;
    i = 0;
    while(fgets(cad, 5000, stdin)){
        while(cad[i] != '\0'){
            if((cad[i] >= 'a' && cad[i] <= 'z') || (cad[i] >= 'A' && cad[i] <= 'Z')){
                if(cad[i] == 'a' || cad[i] == 'e' || cad[i] == 'i' || cad[i] == 'o' || cad[i] == 'u'){
                    while((cad[i] >= 'a' && cad[i] <= 'z') || (cad[i] >= 'A' && cad[i] <= 'Z')){
                        printf("%c", cad[i]);
                        i++;
                    }
                    --i;
                    printf("ay");
                }
                else if(cad[i] == 'A' || cad[i] == 'E' || cad[i] == 'I' || cad[i] == 'O' || cad[i] == 'U'){
                    while((cad[i] >= 'a' && cad[i] <= 'z') || (cad[i] >= 'A' && cad[i] <= 'Z')){
                        printf("%c", cad[i]);
                        i++;
                    }
                    --i;
                    printf("ay");
                }
                else if((cad[i] >= 'a' && cad[i] <= 'z') || (cad[i] >= 'A' && cad[i] <= 'Z')){
                    aux = cad[i];
                    i++;
                    while((cad[i] >= 'a' && cad[i] <= 'z') || (cad[i] >= 'A' && cad[i] <= 'Z')){
                        printf("%c",cad[i]);
                        i++;
                    }
                    --i;
                    printf("%cay", aux);
                }
            }
            else{
                printf("%c",cad[i]);
            }
            ++i;
        }
        i = 0;
    }
    return 0;
}