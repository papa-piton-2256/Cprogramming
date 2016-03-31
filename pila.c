#include<stdio.h>
#include<stdlib.h>
typedef struct nodo NODO;
typedef NODO* PTR;
struct nodo{
	 char* dato;
	 PTR next;	
	};
void push(int,PTR*);
void pop(PTR*);
void libera(PTR);
void imprime(PTR);
int vacia(PTR);

int main(){
	PTR pila=NULL;
	
	pila->dato=malloc(100);

	imprime(pila);
	
}


void push(int dato,PTR* pila){
	
	if(*pila==NULL){
		*pila=malloc(sizeof(NODO));
		(*pila)->next=NULL;
		(*pila)->dato=dato;
	}
	else{
	PTR aux=malloc(sizeof(NODO));

		aux->next=*pila;
		aux->dato=dato;
		*pila=aux;

	}
	
}

void imprime(PTR pila){
		PTR aux=pila;

		while(aux!=NULL){
			printf("%d\n",aux->dato);
			aux=aux->next;
		}
		printf("\n");
	}
void pop(PTR* pila){
	if(*pila){ 
	
	PTR aux=*pila;
	free(aux);
	*pila=(*pila)->next;
	}
	else {
	printf("SE LLAMO A POP() PERO LA PILA ESTÁ VACIA\n");
	}
}
int vacia(PTR pila){
	return pila==NULL;
}
