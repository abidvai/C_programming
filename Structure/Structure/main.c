#include<stdio.h>

struct student{
    int id;
    float cgpa;
    char name[20];
};
int main(){
    struct student s;
    printf("Enter Your ID: \n");
    scanf("%d",&s.id);
    printf("Enter Your CGPA: \n");
    scanf("%f",&s.cgpa);
    printf("Enter Your name: \n");
    scanf("%s",s.name);
    
    printf("Name: %s; ID: %d; CGPA: %f\n",s.name,s.id,s.cgpa);
    
    return 0;
}
