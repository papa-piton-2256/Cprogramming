#include<stdio.h>

int main(){

recursive(1);
printf("\n\n\n");
recursive(2);
printf("\n\n\n");
recursive(3);
printf("\n\n\n");

}
int recursive(int a){
         static int cycle=1;
        if(a!=1) {
        cycle++;
        if(a%2)
                recursive((3*a)+1);
        else
                recursive(a/2);

        }
        else return cycle;      
}


