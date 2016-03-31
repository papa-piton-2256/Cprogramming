/*
ID: papa_piton
LANG: C
TASK: ride
*/
#include <stdio.h>
int main () {
 
    FILE *fin  = fopen ("ride.in", "r");
    FILE *fout = fopen ("ride.out", "w+");
    char a[100];
    long long int multa=1,multb=1,i,ascii=64;
   int comet,group;
    char b[100];
    fscanf (fin, "%s", a);	/* the two input integers */
    fscanf (fin, "%s",b);	/* the two input integers */
    for(i=0;a[i]!='\0';i++){
		multa*=a[i]-ascii;
	}
   for(i=0;b[i]!='\0';i++){
		multb*=b[i]-ascii;
	}
	
	group=multa%47;
	comet=multb%47;
      if(comet==group)
	fprintf (fout, "%s\n", "GO");
	else
    fprintf (fout, "%s\n", "STAY");

    return 0;
}
