//
//  main.c
//  For_loop
//
//  Created by Abdullah Al Abid on 3/9/22.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i;
    for(i=100;i >= 1; i--){
        printf("%d\n",i);
    }
    printf("Decrement in For loop\n");
    for(i=10; i>=1; i--){
        printf("%d\t",i);
    }
    printf("\n\n");
    return 0;
}
