#include<stdio.h>

void NhapMang(int arr[], int n){
    int i,j=1;
    for(i=0;i<n;i++){
        printf("%d:",j);
        scanf("%d",&arr[i]);
        j++;
    }
}

void TinhTong(int arr[],int n,int a,int b){
    int i,j;
    int sum=0;
    for(i=0;i<n;i++){
        for(j=a;j<=b;j++){
            if(arr[i]==j){
                sum+=j;
            }
        }
    }
    printf("Tong So trong [%d,%d]:%d",a,b,sum);
}

int main(){
    int n;
    printf("Nhap N:");
    scanf("%d",&n);
    int arr[n];
    NhapMang(arr,n);
    printf("Nhap [a,b]:");
    int a,b;
    printf("\nNhap A");
    scanf("%d",&a);
    printf("\nNhap B:");
    scanf("%d",&b);
    TinhTong(arr,n,a,b);
}