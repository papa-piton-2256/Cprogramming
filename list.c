/* 
 * File:   list.c
 * Author: felix
 *
 * Created on 30 de octubre de 2012, 21:00
 */


#include "list.h"

/*
 * 
 */

void delete(GENERIC *x, LIST *pL)
{
    if((*pL)!=NULL) 
    {
        if(compares(x[0],(*pL)->element[0])==0)
            (*pL) = (*pL)->next;
      else 
          delete(x, &((*pL)->next));
    }
}

void delete_LIST(int type, void *val, LIST *pL) {
    GENERIC *v;
    v = vector_GENERIC(1);
    v[0] = new_GENERIC(type, val);
    delete(v, pL);
}

void insert(LIST x, LIST *pL)
{
    if((*pL) == NULL)
            (*pL) = x;
    else if(compares(x->element[0], (*pL)->element[0]) !=0)
            insert(x, &((*pL)->next));
}

void insert_LIST(int type, void *val, LIST *pl) {
    insert(new_CELL(type, val), pl);
}

void insert_LIST2(int type1, void *val1, int type2, void *val2, LIST *pl) {
    insert(new_CELL2(type1, val1, type2, val2), pl);
}

void lookup_LIST(int type, void *val, LIST L) {
    printf("%s\n", (lookup(new_GENERIC(type, val), L)) == TRUE ? "Si se encuentra el dato en la lista" : "No se encuentra");  
}

BOOLEAN lookup(GENERIC x, LIST L)
{
    if(L==NULL) return FALSE;
    else if(compares(x,L->element[0])==0) return TRUE;
    else return lookup(x, L->next);
}

LIST MergeSort(LIST list)
{
    LIST SecondList;

    if(list == NULL) return NULL;
    else if(list->next == NULL) return list;
    else {
        SecondList = split(list);
        return merge(MergeSort(list), MergeSort(SecondList));
    }
}

LIST merge(LIST list1, LIST list2)
{
    if(list1 == NULL) return list2;
    else if(list2 == NULL) return list1;
    else
    {
        if (compares(list1->element[0],  list2->element[0])<0) {
            list1->next = merge(list1->next, list2);
            return list1;
        } else {
            list2->next = merge(list1, list2->next);
            return list2;
        }
    }
}

LIST new_LIST() {
    return NULL;
}

LIST new_CELL(int type, void *val) {
    LIST v;
    v = (LIST) malloc(sizeof(struct CELL));
    v->element = vector_GENERIC(1);
    v->N = 1;
    (v->element)[0] = new_GENERIC(type, val);
    v->next = NULL;
    return v; 
}

LIST new_CELL2(int type1, void *val1, int type2, void *val2) {
    LIST v;
    v = (LIST) malloc(sizeof(struct CELL));
    v->element = vector_GENERIC(2);
    v->N = 2;
    v->element[0] = new_GENERIC(type1, val1);
    v->element[1] = new_GENERIC(type2, val2);
    v->next = NULL;
    return v; 
}

void print_LIST(LIST p) {
    int i;
    if(p != NULL) {
        for(i=0; i< p->N; i++) 
            print_GENERIC(p->element[i]);
        printf("\n");
        print_LIST(p->next);
    } 
}

LIST split(LIST list)
{
    LIST pSecondCell;

    if(list == NULL) return NULL;
    else if(list->next == NULL) return NULL;
    else {
        pSecondCell = list->next;
        list->next = pSecondCell->next;
        pSecondCell->next = split(pSecondCell->next);
        return pSecondCell;
    }
}
