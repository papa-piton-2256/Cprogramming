#include<stdio.h>
#include<stdlib.h>
int main(){
	short size=1;
	short choice;
	short* a=malloc(sizeof(short)*size);
	do{
		scanf("%hu",&choice);
		if(choice==42)break;
		a[size-1]=choice;
		size++;	
		a=realloc(a,sizeof(short)*size);
	}while(choice!=42);
	
	for(int i=0;i<size-1;i++){
		printf("%hu\n",a[i]);
	}
	return 0;
}
