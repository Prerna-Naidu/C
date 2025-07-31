#include<stdio.h>
int gcd(int a, int b){
    if(b==0)
    return a;
   return gcd(b,a%b); 
}
int main(){
    int n,m;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter m: ");
    scanf("%d", &m);
    printf("The gcd %d and %d is %d" , n,m,gcd(n,m));
    return 0;
}