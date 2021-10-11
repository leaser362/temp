#include<stdio.h>

void NhapMang(int sohang, int socot,int arr[][sohang]){
    int i,j;
    for(i=0;i<=sohang;i++){
        for(j=0;j<=socot;j++){
            printf("A[%d][%d]",j,i);
            scanf("%d",&arr[j][i]);
        }
    }

}

void XuatMang(int sohang,int socot,int arr[][sohang]){
    int i,j;
    for(i=0;i<=sohang;i++){
        for(j=0;j<=socot;j++){
            printf(" %d ",arr[j][i]);
        }
        printf("\n");
    }
}

int main(){
    int sohang,socot;
    printf("Add Rows:");
    scanf("%d",&socot);
    printf("Add Collum:");
    scanf("%d",&sohang);
    int arr[socot][sohang];
    NhapMang(sohang,socot,arr);
    XuatMang(sohang,socot,arr);
}