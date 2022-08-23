//  main.c
//  pointer_With_Array & function
//
//  Created by Abdullah Al Abid on 23/8/22.

#include <stdio.h>

int sum (int *a,int size){
    int i,sum = 0;
    for(i=0; i < size; i++){
        sum = sum + *(a+1);
    }
    return sum;
/* void swap(int *n1, int *n2){
    int temp = *(n1);
    *(n1) = *(n2);
    *(n2) = temp; */
}
int main(int argc, const char * argv[]) {
    int arr[3] = {4,5,10};
    int result = sum(arr, 3);
    printf("Sum of the array is: %d\n",result);
    
    /* int a[5]={1,2,3,4,5};
    int *ptr = &a[3];
    printf("%d\n",*(ptr));
    printf("%d\n",*(ptr+1));
    printf("%d\n",*ptr-1); */
    
   /* int num1=5, num2 = 10;
    printf("Num1 = %d ; num2 = %d\n",num1,num2);
    
    swap(&num1, &num2);
    
    printf("Num1 = %d ; Num2 = %d\n",num1,num2); */
    
    
    
    return 0;
}
