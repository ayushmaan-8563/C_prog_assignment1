//Program to Find Area and Circumference of Circle  

#include<stdio.h>
int main(){
    float r, a, c;
    const float pi = 3.14159265;
    
    printf("enter the radius of circle: ");
    scanf("%f", &r);
    
    c = 2*pi*r; 
    a = pi*r*r;
    
    printf("The circumference of circle is %.2f units\n", c);
    printf("The area of circle is %.2f square units\n", a);
    
    return 0;
}



















    