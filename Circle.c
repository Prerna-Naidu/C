#include<stdio.h>
int main (){
    int radius;
    float PI=3.14,area,circumference;
    printf("Enter the radius of the circle:");
    scanf("%d", &radius);
    circumference = 2*PI*radius;
    printf("Circumference of the circle: %f\n",circumference);
    area = PI*radius*radius;
    printf("Area of the circle: %f",area);
    return 0;
}