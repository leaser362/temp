#include<stdio.h>

void Nhap(int arr[],int n){
    int i,j=1;
    for(i=0;i<n;i++){
        printf("%d:",j);
        scanf("%d",&arr[i]);
        j++;
    }
}

void XepMang(int arr[],int n){
    int i,j;
    int tmp;
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                tmp=arr[i];
                arr[i]=arr[j];
                arr[j]=tmp;
            }
        }
    }
}

int main(){
    int n=5;
    int arr[n];
    Nhap(arr,n);
    XepMang(arr,n);
    int i;
    for(i=0;i<n;i++){
        printf(" %d ",arr[i]);
    }
}