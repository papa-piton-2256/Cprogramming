#include<stdio.h>
void funcion(char*);
int main(){

	funcion("printf()");
	funcion("print('python style')");
	funcion("printf(es valido)");
	funcion("p(printf)");
	funcion("Yo contengo un print f pero invalido");
}
void funcion(char* alfabeto){
	static int a=0;
	char*b=alfabeto;
	int i=0;
	a++;
	while(alfabeto[i]){
		if(alfabeto[i]=='p')
			if(alfabeto[++i]=='r')
				if(alfabeto[++i]=='i')
					if(alfabeto[++i]=='n')
						if(alfabeto[++i]=='t')
							if(alfabeto[++i]=='f')	{
								printf("La cadena #%d %s contiene printf válido\n",a,b);
								return;
								}
		else return;
		i++;
	}
}
