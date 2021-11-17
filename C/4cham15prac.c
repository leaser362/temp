#include<stdio.h>

void Nhap(int *n){
    *n=0;
    while(*n<=0){
        printf("Nhap So Luong Phan Tu:");
        scanf("%d",n);
    }
    
}

void NhapMang(int n,int arr[]){
    int i;
    for(i=0;i<=n;i++){
        printf("arr[%d]=");
        scanf("%d",&arr[i]);
    }
}



int main(){
int n,m,k;
int arr1[1000];
int arr2[1000];
}