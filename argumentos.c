
/*Compile gcc foo.c -std=c99*/

#include<stdio.h>
int main(int argc,char** argv){
  
      printf("There are %d arguments\n",argc);
      // ./a.out we are the champions
      printf("The arguments are\n");
      for(int i=1;i<argc;i++){
           printf("%s\n",argv[i]);
      }
      //we
      //are
      //the
      //champions
  
}
