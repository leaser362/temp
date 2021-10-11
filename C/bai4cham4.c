#include<stdio.h>

void NhapMang(int arr[],int n){
    int i,j=1;
    for(i=0;i<=n-1;i++){
        printf("%d:",j);
        scanf("%d",&arr[i]);
        j++;
    }
}

int main(){
    int n;
    printf("Nhap N:");
    scanf("%d",&n);
    int arr[n];
    NhapMang(arr,n);
    int x;
    printf("Nhap X:");
    scanf("%d",&x);
    int count=0;
    int i=0;
    while(i<=n-1){
        if(arr[i]==x){
            count++;
        }
        i++;
    }
    if(count==0){
        printf("Khong ton tai gia tri %d",x);
    }
    else{
        printf("Ton Tai Gia tri %d,Xuat hien %d lan",x,count);
    }
    return 0;
}