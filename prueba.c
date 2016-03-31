/* memchr example */
#include <stdio.h>
#include <string.h>

int main ()
{
  char * pch;
  char str[]= "Esta vez sera muy facil modificar las letras a";

	char set;
 printf("Tenemos esta  cadena : %s \n",str);
 printf("Introduzca una letra a modificar\n"); 
 scanf("%c",&set);
    getchar();
	printf("\n");
   while(pch!=NULL){
int incremento=0;
 pch = (char*) memchr (str+incremento,set, strlen(str));
if(pch!=NULL) {
	*pch=toupper(*pch);	
	incremento=str-pch;	
printf("%c en %d\n",set,pch-str);
	printf("cadenadir--%p punterodir--%p \n",str,pch);
	}

	} 
    printf ("cadena %s.\n",str);

  return 0;
}
