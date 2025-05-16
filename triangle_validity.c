#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter sides of triangle:");
    scanf("%d %d %d",&a,&b,&c);
    if((a+b>c) && (a+c>b) && (b+c>a)){
        printf("It is a traingle\n");
    }else {
        printf("It is not a triangle\n");
    }
    
    
    return 0;
}