#include<stdio.h>

void Nhap(int *n,int arr[]){
    *n=0;
    while(*n<=0){
        printf("Nhap N:");
        scanf("%d",n);
    }
}

void NhapMang(int arr[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("arr[%d]=");
        scanf("%d",&arr[i]);
    }
}

int main(){
    int n;
    int arr[1000];
    Nhap(&n,arr);
    NhapMang[arr,n];
}