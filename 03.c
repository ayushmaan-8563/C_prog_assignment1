//C Program to Find Area of Triangle Given Base and Height

#include <stdio.h>
int main (){
    int base, height, area=0;
    
    printf("enter base of triangle: ");
    scanf("%d", &base);
    printf("enter height of triangle: ");
    scanf("%d", &height);

    area =  (base * height) / 2;
    
    printf("The area of the triangle is: %d\n", area);

    return 0;
}