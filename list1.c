/* 
 * File:   prueba_lista.c
 * Author: felix
 *
 * Created on 22 de octubre de 2012, 9:27
 */

#include <stdio.h>
#include <stdlib.h>
#include "lista.c"
/*
 * 
 */
int main(int argc, char** argv) {
    LIST a = NULL;
    insert(1, &a);
    insert(2, &a);
    insert(3, &a);
    
    print(a);
    
    if(lookup(1, a)) printf("Si esta\n");
    else printf("no esta\n");
    
    delete(2, &a);
    
    print(a);    
    return (EXIT_SUCCESS);
}

