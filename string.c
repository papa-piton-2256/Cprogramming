#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include<ctype.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
int main()
{
    int N; // Number of elements which make up the association table.
    scanf("%d", &N);
    int Q; // Number Q of file names to be analyzed.
    scanf("%d", &Q);
    char* DIC[N];
    char* DIC1[N];
    for (int i = 0; i < N; i++) {
        char EXT[101]; // file extens
        DIC[i]=malloc(101);
        DIC1[i]=malloc(501);
        
        char MT[501]; // MIME type.
        
        scanf("%s%s", EXT, MT); fgetc(stdin);
    strcpy(DIC[i],EXT);
    strcpy(DIC1[i],MT);
    }
    for(int j=0;j<N;j++){
            printf("%s\t",DIC[j]);
            printf("%s\n",DIC1[j]);
        }
    char* pch; 
    int j,found;
    char aux[101];
    char aux1[101];
    strcpy(aux1,DIC[1]);
    for(j=0;j<101;j++){
        aux[101]=toupper(aux1[j]);
        }
    printf("DEBUG %s\n",aux);
    for (int i = 0; i < Q; i++) {
        char FNAME[501]; // One file name per line.
        fgets(FNAME, 501, stdin); // One file name per line.
        for(j=0;j<N;j++){
            pch=NULL;
            pch=strstr(FNAME,DIC[j]);
            pch=strstr(FNAME,DIC[j]);
            if(pch!=NULL) found=j;
            else found=0;    
        }
        if(found>0) printf("%s\n",DIC1[found]);
        //else printf("%s\n","UNKNOWN");
    }

    // Write an action using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");

     // For each of the Q filenames, display on a line the corresponding MIME type. If there is no corresponding type, then display UNKNOWN.

    return 0;
} 
