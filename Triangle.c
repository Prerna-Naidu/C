#include<stdio.h>
int main(){
    float area,base,height;
    printf("Enter the base of the triangle: ");
    scanf("%f", &base);
    printf("Enter the height of the triangle: ");
    scanf("%f", &height);
    area = (base*height)/2;
    printf("Area of the triangle: %f\n ", area);
    return 0;
}