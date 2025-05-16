#include<stdio.h>
int main(){
    int marks;
    printf("Enter the marks:\n");
    scanf("%d",&marks);
    if(marks>=90 && marks<=100){
        printf("A\n");
    }
    else if(marks>=80 && marks<90){
        printf("B\n");
    }
     else if(marks>=70 && marks<80){
        printf("C\n");
    }
    else if(marks>=60 && marks<70){
        printf("D\n");
    }
    else if(marks>=0 && marks<60){
        printf("F\n");
    }
    else{
        printf("not valid marks\n");
    }
    return 0;
}
