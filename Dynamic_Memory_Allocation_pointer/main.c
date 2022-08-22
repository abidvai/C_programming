// malloc() ; calloc() ; free() ; realloc()
//  main.c
//  Dynamic_Memory_Allocation_pointer
//
//  Created by Abdullah Al Abid on 23/8/22.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    int *ptr1, *ptr2;
    ptr1 = (int *) malloc(5 * sizeof(int));
    ptr2 = (int *) calloc(5, sizeof(int));
    if(ptr1 == NULL || ptr2 == NULL){
        printf("Memory not allocated.\n");
    }else{
        printf("Memory allocated successful.\n");
        // do your work
        /* free(ptr);
        printf("Memory freed successful.\n"); */
        
        ptr1 = realloc(ptr1,50);
        printf("Memory allocated Successful.\n");
    }
    return 0;
}
