#include<stdio.h>

void NhapMang(int arr[],int n){
    int i,j=1;
    for (i=0;i<n-1;i++){
        printf("%d:",j);
        scanf("%d",&arr[i]);
        j++;
    }
}

void HienMang(int arr[],int n){
    int i;
    for(i=0;i<n;i++){
        printf(" %d ",i);
    }
}

int XemXet(int arr,int XuatHien[], int size){
    int i;
    for(i=0;i<size;i++){
        if(XuatHien[i]==arr)
        return i;
    }
    return -1;
}

void SoLanXuatHien(int arr[],int n){
    int xuathien[n];
    int dem[n];
    int i;
    int size=0;
    for(i=0;i<n;i++){
        dem[i]=0;
        xuathien[i]=0;
    }
    for(i=0;i<n;i++){
        int tmp=XemXet(arr[i],xuathien,size);
       if(tmp==-1){
           xuathien[size]=arr[i];
           dem[size]++;
           size++;
       } 
       else{
           dem[tmp]++;
       }
    }
    for(i=0;i<n;i++){
        printf("\nSo %d Xuat Hien %d lan.",xuathien[i],dem[i]);
    }
}

int main(){
    int n;
    printf("Nhap N:");
    scanf("%d",&n);
    int arr[n];
    NhapMang(arr,n);
    SoLanXuatHien(arr,n);
    return 0;
}