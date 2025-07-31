#include<stdio.h>
int digitalCounts(int n){
    return(n==0)? 0 : 1 + digitalCounts(n/10);
}
int main(){
    printf("Number of digits : %d\n", digitalCounts(56789));
    return 0;
}