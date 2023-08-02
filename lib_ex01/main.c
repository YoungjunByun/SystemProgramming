#include "main.h"

int main(void) {
    int ary[] = {8, 5, 2, 3, 1, 7, 4, 9, 6};
    int size;

    size = sizeof(ary) / sizeof(ary[0]);
    printf("Before sort: ");
    printary(ary, size);

    bubblesort(ary, size);
    
    printf("After sort: ");
    printary(ary, size);

    return 0;
}