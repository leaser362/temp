#include<stdio.h>

void NhapMang(int *arr,int *n){
    n=0;
    while(n<=0){
        printf("Nhap N:");
        scanf("%d",n);
    }
    int i,j=1;
    for(i=0;i< *n;i++){
        printf("%d:",j);
        scanf("%d",&arr[i]);
        j++;
    }
}



int main(){
    int n;
    int arr[n];
    NhapMang(arr,&n);
    int i;
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}