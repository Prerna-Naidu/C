#include<stdio.h>
void bubbleSort(int arr[],int n){
    if(n==1) return;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            int temp = arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
    bubbleSort(arr,n-1);
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main(){
    int arr[]={5,3,8,1,2};
    int n= sizeof(arr)/sizeof(arr[0]);
    printf("Unsorted Array: ");
    printArray(arr,n);
    bubbleSort(arr,n);
    printf("Sorted Array: ");
    printArray(arr,n);
    return 0;
}