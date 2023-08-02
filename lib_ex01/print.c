#include "print.h"

void printary(int *ary, int size){
    int i;
    for (i=0; i<size; ++i) {
        printf("%3d", ary[i]);
    }
    printf("\n");
}