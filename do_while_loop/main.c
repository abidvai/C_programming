//
//  main.c
//  do_while_loop
//
//  Created by Abdullah Al Abid on 4/9/22.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i;
    i= 100;
    do{
        printf("%d\n", i);
        i-=5;
    }while(i >= 0);
    return 0;
}
