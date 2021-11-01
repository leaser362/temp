#include<stdio.h>
#include<stdbool.h>

void NhapMang(int arr[],int n){
    int i,j=1;
    for(i=0;i<n;i++){
        printf("%d",j);
        scanf("%d",&arr[i]);
        j++;
    }
}

int Ktra(int arr[],int n){
    int XuatHien[n];
    int SoLan[n];
    int size;
    int i;
    for(i=0;i<n;i++){
        XuatHien[i]=0;
        SoLan[i]=0
    }
    
}

int main(){
    int n;
    printf("Nhap So Luong Phan Tu");
    scanf("%d",&n);
    int arr[n];
    NhapMang(arr,n);

}