#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
void chucknorris(char*);
int cuantos(int);
void tobin(char*,int,int);
char* invierte(char*);
int main(){
	int i=0;
	char cade[101];
	fgets(cade,101,stdin);
		while(cade[i]!='\n'){
	int entero=(int)*cade;	
	int a=cuantos(entero);
	char binario[a+1];
	tobin(binario,a,entero);
	chucknorris(binario);
	i++;
	}
		printf("\n");

}

int cuantos(int en){
	int i=0;
	while(en){
		i++;
		en/=2;
	    
	}
	return i;
}
void tobin(char* binario,int a,int n){
	char *copia=malloc(a+1);
	
	int i=0;
	while(n){
		copia[i++]=(n%2)+'0';
				n/=2;


	}
	copia[i]='\0';
	
	strcpy(binario,invierte(copia));
	
}

char* invierte(char* inv){
	int i;
	int c=0;

	char* aux=malloc(strlen(inv)+1);	
	
	for(i=strlen(inv)-1,c;i>=0;i--,c++){
		aux[c]=inv[i];
	}
	
	inv[c]='\0';
	return aux;

}

void chucknorris(char* a){
	int i=0,uno=0,cero=0;
	int j;
	while(a[i]!='\0'){
		uno=0;
		cero=0;
		//Unos
		if(a[i]=='1'){
			 uno++;
			 i++;
			 printf("0 ");
			 while(a[i]=='1'){
				uno++;
				i++;
			 }
			for(j=0;j<uno;j++){
				printf("0");
			}
			if(a[i]!='\0')
			printf(" ");
		}
		if(a[i]=='0'){
			cero++;
			i++;
			printf("00 ");
			while(a[i]=='0'){
				cero++;
				i++;
			}
			for(j=0;j<cero;j++){
				printf("0");
			}
			if(a[i]!='\0')
			printf(" ");
		}		
	}

}
