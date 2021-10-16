#include<stdio.h>

int NhapN(int n){
    printf("Nhap N:");
    scanf("%d",&n);
    return n;
}

void NhapMang(int arr[],int n){
    int i,j=1;
    for(i=0;i<n;i++){
        printf("%d:",j);
        scanf("%d",&arr[i]);
        j++;
    }
}

int main(){
    int n=0;
    n=NhapN(n);
    int arr[n];
    NhapMang(arr,n);
    int k;
    while(k<=0||k>=n){
        printf("Nhap K:");
        scanf("%d",&k);
    }
    return 0;
}