#include<stdio.h>

void NhapMang(int arr[],int n){
    int i,j=1;
    for(i=0;i<n;i++){
        printf("%d:",j);
        scanf("%d",&arr[i]);
        j++;
    }
}

int KiemTra(int arr,int XuatHien[],int size){
    int i;
    for(i=0;i<=size;i++){
        if(arr==XuatHien[i]){
            return i;
        }
    }
    return -1;
}

void DemSoLanXuatHien(int arr[],int n){
    int XuatHien[n];
    int SoLan[n];
    int i;
    int size=0;
    for(i=0;i<n;i++){
        SoLan[i]=0;
    }
    
    for(i=0;i<n;i++){
        int index=KiemTra(arr[i],XuatHien,size);
        if(KiemTra(arr[i],XuatHien,size)==-1){
            XuatHien[size]=arr[i];
            SoLan[size]=1;
            size++;
        }
        else{
            SoLan[index]++;
        }
    }
    for(i=0;i<size;i++){
        printf("\nSo %d Xuat Hien %d lan",XuatHien[i],SoLan[i]);
    }
}

int main(){
    int n;
    printf("Nhap N:");
    scanf("%d",&n);
    int arr[n];
    NhapMang(arr,n);
    DemSoLanXuatHien(arr,n);

}