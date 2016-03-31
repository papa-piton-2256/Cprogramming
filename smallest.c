#include<stdio.h>
#include<limits.h>
int main(){
		long int n,i;
		long int j=1;
		long int counter=1;
		int flag=0;
		for(i=1;i<=100000000000000000;i++){
			counter=1;
			for(j=1;j<=20;j++){
				flag=i%j;
				if(flag==0) {counter++;
				n=i;
				
				}else break;
		}			
		if(counter>=20) break;
		}	
		if(counter>=20)
		printf("%ld\n",n);
	
	}
