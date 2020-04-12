#include <stdio.h>
int main(){
    int i,j;
    char cad[2000], aux;
    i = 0;
    while(fgets(cad, 2000, stdin)){
        while(cad[i] != '\0' && cad[i] != '\n'){
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
        if(cad[i] == '\n')
            printf("\n");
        i = 0;
    }
    return 0;
}

/*
#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch,save;
    int n;
    while(scanf("%c",&ch)==1)
    {
        if((ch=='a'|| ch=='A'||ch=='e'|| ch=='E'||ch=='i'|| ch=='I'||ch=='u'|| ch=='U'||ch=='o'|| ch=='O'))
        {
            printf("%c",ch);
            while(scanf("%c",&ch)==1){
                if(isalpha(ch)==0)
                    break;
                printf("%c",ch);
            }            printf("ay%c",ch);
        }
        else if(isalpha(ch))
        {
            save=ch;
            while(scanf("%c",&ch))
            {
                if(isalpha(ch)==0)
                    break;
                printf("%c",ch);
            }
            printf("%cay%c",save,ch);
        }
        else
            printf("%c",ch);
    }
    return 0;
}*/