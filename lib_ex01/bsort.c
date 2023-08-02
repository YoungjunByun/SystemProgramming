#include "bsort.h"

void bubblesort(int* nums, int size){
    int i, j;
    for(i = 0; i < size-1; ++i){
        for(j = 0; j< size-1-i; ++j){
            if(nums[j] ASC nums[j+1]){
                SWAP(nums[j], nums[j+1]);
            }
        }
    }
}