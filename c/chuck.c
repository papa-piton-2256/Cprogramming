#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int funcion(char*);
int main(){
	char a[]="1000011";
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
				if(j+1==uno) printf(" ");
			}
			
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
			printf(" ");
		}		
		i++;	
}
	printf("\n");

}
