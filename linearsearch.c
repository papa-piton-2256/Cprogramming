/*
	Linear Search
	Andrés Huerta López 1.0
	March 29th 2016
*/
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define TAM 10 /* We can search in range 1 to TAM*/

/*Function prototypes*/
int linearsearch(int*,int);

	int main(){
		
		srand(time(NULL));
		
		int a[TAM];
		
		int key,flag;
		
		for(int i=0;i<TAM;i++){
			
			a[i]=1+rand()%TAM;
		}
		
		printf("Introduce a number between 1 and %d to be search \n",TAM);
		
		scanf("%d",&key);
	
		flag=linearsearch(a,key);
	
		if(flag){
			printf("Key is in %d position\n",flag);
		}
		else printf("Error,  key %d not found\n",key);
	}

	int linearsearch(int* array,int key){
		
		for(int i=0;i<TAM;i++){
			
			if(array[i]==key){
				return i;
			}
		}
		return 0;
	}
