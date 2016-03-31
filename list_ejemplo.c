/* 
 * File:   list_ejemplo.c
 * Author: felix
 *
 * Created on 31 de octubre de 2012, 11:36
 */

#include <stdio.h>
#include <stdlib.h>
#include "generic.h"
#include "list.h"

/*
 * 
 */

void ejemplo_01() {
    int a = 10;
    char b;
    LIST l = new_LIST();
    b = 'H';
    insert_LIST2(STRING, "Hola", INT, &a, &l);
    insert_LIST2(STRING, "Juan", CHAR, &b, &l);
    insert_LIST(STRING, "Algo", &l);
   
    printf("********************************\n");
    print_LIST(l);
    delete_LIST(STRING, "Algo", &l);
    printf("********************************\n");
    print_LIST(l);
    lookup_LIST(STRING, "Algo", l);
}

void ejemplo_02() {
    int i, val;
    LIST l1 = new_LIST();
    LIST l2 = new_LIST();
    
    for(i=0; i<100; i++) {
        val = rand()%200;
        insert_LIST(INT, &val, &l1);
    }
    
    l2 = MergeSort(l1);
    
    print_LIST(l2);
    
}

int main(int argc, char** argv) {
    ejemplo_02();
    
}
