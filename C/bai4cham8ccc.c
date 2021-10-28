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

bool Ktra(int arr[],int n){
    int i;
    for(i=0;i<=n/2;i++){
        if(arr[i]!=arr[n-i-1]){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    printf("Nhap So So Luong Phan Tu:");
    scanf("%d",&n);
    int arr[n];
    NhapMang(arr,n);
    if(Ktra(arr,n)){
        printf("Mang Doi Xung");
    }
    else{
        printf("Mang Khong Doi Xung");
    }
}