#include<stdio.h>
int main(){
    int age;
    printf("enter the age:");
    scanf("%d",&age);
    if(age>=18){
        printf("adult-eligible for vote\n");
    } else if(age>=13 && age<=17){
        printf("teenage-not eligible for vote\n");
    } else if(age>=0 && age<=12){
        printf("child-not eligible for vote\n");
    } else{
        printf("not a valid age\n");
    }
    return 0;
}