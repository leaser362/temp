#include<stdio.h>

void Nhap(int *n,int arr[]){
    *n=0;
    while(*n<=0){
        printf("Nhap N:");
        scanf("%d",n);
    }
    int i;
    for(i=0;i<(*n);i++){
        printf("arr[%d]=",i);
        scanf("%d",&arr[i]);
    }
}

void XuatMang(int arr[],int n){
    int i;
    for(i=0;i<n-1;i++){
        printf(" %d ",arr[i]);
    }
}

void Xoa(int arr[],int n, int k){
    int i;
    for(i=k;i<n-1;i++){
        arr[i]=arr[i+1];
    }
}

int main(){
    int n;
    int arr[1000];
    Nhap(&n,arr);
    int k=0;
    while (k<=0||k>n){
        printf("Nhap K:");
        scanf("%d",&k);
    }
    Xoa(arr,n,k);
    XuatMang(arr,n);
}