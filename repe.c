#include<stdio.h>
int repe(int*,int);
int main(){

	
		int a[3],i;
		for(i=0;i<3;i++)
			scanf("%d",&a[i]);
		if(repe(a,3))
		printf("Hay repetidos\n");
	}
int repe(int*a,int tam){
	int i,j;
	for(i=0;i<tam-1;i++){
		for(j=i+1;j<tam;j++){
			if(a[i]==a[j]) return 1;
		}
	
	}
	return 0;
}

