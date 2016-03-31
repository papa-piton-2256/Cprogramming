#include<stdio.h>
int main(){
	
	int a,b,c;
	int product=1;
	for(a=-100;a<=1000;a++){
		for(b=-100;b<=1000;b++){
			for(c=-100;c<=1000;c++){
				
					if(a*a+b*b==c*c){
						if(a<b&&b<c)
						if(a+b+c==1000){ printf("%d %d %d\n",a,b,c);
							product*=a*b*c;
						}
					}
				}
			}
		}
	

	printf("product = %d\n",product);
	}
