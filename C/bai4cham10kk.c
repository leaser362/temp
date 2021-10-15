#include<stdio.h>

void NhapMang(int arr[],int n){
    int i,j=1;
    for(i=0;i<n;i++){
        printf("%d:",j);
        scanf("%d",&arr[i]);
        j++;
    }
}

int XemXet(int arr,int XuatHien[],int size){
    int i;
    for(i=0;i<size;i++){
        if(XuatHien[i]==arr){
            return 0;
        }
    }
    return -1;
}

void XuatHien(int arr[],int n){
    int XuatHien[n];
    int i;
    int size=0;
    for(i=0;i<n;i++){
        XuatHien[i]=0;
    }
    for(i=0;i<n;i++){
        int index=XemXet(arr[i],XuatHien,size);
        if(index==-1){
            XuatHien[size]=arr[i];
            size++;
        }
    }
    printf("Trong Day Co Cac So La:");
    for(i=0;i<n;i++){
        if(XuatHien[i]!=0){
            printf(" %d ",arr[i]);
        }
    }
}

int main(){
    int n=0;
    while(n<=0){
        printf("Nhap N:");
        scanf("%d",&n);
    }
    int arr[n];
    NhapMang(arr,n);
    XuatHien(arr,n);
    return 0;
}