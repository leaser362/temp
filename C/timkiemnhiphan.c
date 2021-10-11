#include<stdio.h>
#include<stdbool.h>

void NhapMang(int arr[],int n){
    int i;
    int j=1;
    for(i=0;i<=n-1;i++){
        printf("\nNhap So %d :",j);
        scanf("%d",&arr[i]);
        j++;
    }
}

void SapXepMang(int arr[]){
    int i,j;
    int tmp;
    for(i=0;i<=9;i++){
        for(j=i+1;j<=10;j++){
            if(arr[i]>arr[j]){
                tmp=arr[i];
                arr[i]=arr[j];
                arr[j]=tmp;
            }
        }
    }
}

bool TimNhiPhan(int arr[],int x,int n){
    int left=0;
    int right=n-1;
    SapXepMang(arr);
    while(left<=right){
    int mid=(left+right)/2;
    if(arr[mid]==x){
        return true;
    }
    else{
        if(arr[mid]<x){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    }
    return false;
}

int main(){
    int n=0;
    while(n<=0){
        printf("Nhap N:");
        scanf("%d",&n);
    }
    
    int x;
    printf("Nhap X De Tim:");
    scanf("%d",&x);
    int arr[n];
    NhapMang(arr,n);
    if(TimNhiPhan(arr,x,n)){
        printf("Ton tai X");
    }
    else{
        printf("Ko Ton Tai X");
    }

}

