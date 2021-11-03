#include<stdio.h>
#include<stdbool.h>

void NhapMang(int arr[],int n){
    int i,j=1;
    for(i=0;i<n;i++){
        printf("%d:",j);
        scanf("%d",&arr[i]);
        j++;
    }
}

bool KiemTra(int size,int arr, int XuatHien[]){
    int i;
    for(i=0;i<size;i++){
        if(arr==XuatHien[i]){
            return false;
        }
    }
    return true;
}

void XuatMoiSo1Lan(int arr[],int n){
    int XuatHien[n];
    int size=0;
    int i;
    printf("Cac So Trong Day La:");
    for(i=0;i<n;i++){
        if(KiemTra(size,arr[i],XuatHien)){
            XuatHien[i]=arr[i];
            size++;
            printf(" %d ",arr[i]); 
        }
    }
}

int main(){
    int n;
    printf("Nhap N:");
    scanf("%d",&n);
    int arr[n];
    NhapMang(arr,n);
    XuatMoiSo1Lan(arr,n);
}