#include<stdio.h>
void indirect(char*);
void print(char*);
int main(){
	char*a="Hello world\n";
	indirect(a);
	
	return 0;	
}


void indirect(char *a ){
	if(*a!='\0'){
		indirect(a+1);
		print(a);
	} 
}

void print(char *a){
	printf("%c\n",*a);
}
