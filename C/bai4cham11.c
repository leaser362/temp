#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void Nhap(int arr[],int *n){
    n=0;
    while(n<=0){
        printf("Nhap N:");
        scanf("%d",n);
    }
    int i;
    for(i=0;i<*n;i++){
        scanf("%d",arr[i]);
    }
}

int main(){
   int n; 
   int arr[n];
   int i;
   for(i=0;i<n;i++){
       printf(" %d ",arr[i]);
   }
}