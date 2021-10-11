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
            return i;
        }
    }    
    return -1;
}

void SoLanXuatHien(int arr[],int n){
    int XuatHien[n];
    int dem[n];
    int size=0;
    int i;
    for(i=0;i<n;i++){
        dem[i]=0;
        XuatHien[i]=0;
    }
    for(i=0;i<n;i++){
        int tmp=XemXet(arr[i],XuatHien,size);
        if(tmp==-1){
            XuatHien[size]=arr[i];
            dem[size]++;
            size++;
        }
        else{
            dem[tmp]++;
        }
    }
    for(i=0;i<n;i++){
        printf("\nSo %d Xuat Hien %d lan",XuatHien[i],dem[i]);
    }
}

int main(){
int n;
printf("Add N:");
scanf("%d",&n);
int arr[n];
NhapMang(arr,n);
SoLanXuatHien(arr,n);
}