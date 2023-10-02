// Calculate the Factorial of a Given Number

#include<stdio.h>
int main(){
    int n,i,a;

    printf("enter number: ");
    scanf("%d",&n);

    for(a=i=1;a<=n;a++)
    {
       i=i*a;
    }

    printf("The factorial is %d",i);
}