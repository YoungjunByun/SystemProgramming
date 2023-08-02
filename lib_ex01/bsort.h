#ifndef __BSORT_H__
#define __BSORT_H__

void bubblesort(int *nums, int size);

#define SWAP(a, b) do { int temp = a; a = b; b = temp; } while(0)
#define ASC >
#define DESC <

#endif