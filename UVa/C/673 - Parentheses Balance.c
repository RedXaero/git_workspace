#include <stdio.h>
#include <stdlib.h>
/*Accepted*/

struct nodo{
	char dato;
	struct nodo *ptrSiguiente;
};

typedef struct nodo NODO;
typedef NODO *ptrNODO;

void push(ptrNODO *,char);
char pop(ptrNODO *);
void limpiar(ptrNODO *);



int main(){
	
	ptrNODO inicio = NULL;	
	int cont, i = 0, flag = 1, flag2 = 0;
	
	char cad[130], ret;
	
	scanf("%d",&cont);
	getchar();
	
	while(cont > 0){
		
		gets(cad);
		
		if(cad == "\0"){
			printf("Yes\n");
			flag2 == 1;
		}
		else{

			while(cad[i] != '\0'){

				if( cad[i] == '(' ){
					push(&inicio, '(');
				}
				
				else if( cad[i] == '[' ){
					push(&inicio, '[');
				}
				
				else if( cad[i] == ')'){
					ret = pop(&inicio);
					if(ret != '(' )
						flag = 0;	
					
				}
				else if( cad[i] == ']'){
					ret = pop(&inicio);
					if(ret != '[' )
						flag = 0;
					
				}
				else if( cad[i] == ' '){
					
					
				}
				i++;
			}
		}

		if(inicio != NULL)
			flag = 0;
			
			
		
		if(flag2 == 0){
			if(flag == 0) 
				printf("No\n");
			else if (cad == "")
				printf("Yes\n");
			else
				printf("Yes\n");
		}

		limpiar(&inicio);
		free(inicio);

		
		flag2 = 0;
		i = 0;
		flag = 1;
		cont--;
		inicio = NULL;
					
	}
		
	return 0;
	
}


void push(ptrNODO *inicio, char dat){
	
	
	ptrNODO nuevo, aux;
	
	nuevo =(ptrNODO) malloc(sizeof(NODO));
	
	if( (*inicio) == NULL ){
		nuevo->dato = dat;
		nuevo->ptrSiguiente = NULL;
		(*inicio) = nuevo;
		
	}
	else{
		aux = (*inicio);
		(*inicio) = nuevo;
		nuevo->ptrSiguiente = aux;
		nuevo->dato = dat;
	} 

}

char pop(ptrNODO *inicio){
	
	char dat;
	ptrNODO aux;
	
	if((*inicio) == NULL){
		
		return 'n';
		
	}
	else
	{
		dat = (*inicio)->dato;
		aux = (*inicio);
		(*inicio) = aux->ptrSiguiente;
		free(aux);
	}

	
	return dat;
}

void limpiar(ptrNODO *inicio){
	
	char dat;
	ptrNODO aux;
	
	while((*inicio) != NULL){
		aux = (*inicio);
		(*inicio) = (*inicio)->ptrSiguiente;
		free(aux);
	}
	free(*inicio);
	

}
