#include<stdio.h>

void NhapMang(int sohang,int socot, int arr[][socot]){
    int i,j;
    for(i=0;i<=sohang;i++){
        for(j=0;j<=socot;j++){
            printf("\nMang[%d][%d]:",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
}

void XuatMang(int socot,int sohang,int arr[][socot]){
    int i,j;
    for(i=0;i<=sohang;i++){
        for(j=0;j<=socot;j++){
            printf(" %d ",arr[i][j]);
        }
        printf("\n");
    }
}

int main(){
int sohang,socot;
printf("Nhap So Hang:");
scanf("%d",&sohang);
printf("Nhap So Cot:");
scanf("%d",&socot);
int arr[socot][sohang];
NhapMang(sohang,socot,arr);
XuatMang(socot,sohang,arr);
return 0;
}