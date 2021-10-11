#include<stdio.h>

void NhapMang(int arr[],int n){
int i;
int j=1;
for(i=0;i<=n-1;i++){
    printf("%d:",j);
    scanf("%d",&arr[i]);
    j++;
}
}

void XepMang(int arr[],int n){
    int i,j;
    int tmp;
    for(i=0;i<=n-2;i++){
        for(j=i+1;j<=n-1;j++){
            if(arr[i]>arr[j]){
                tmp=arr[i];
                arr[i]=arr[j];
                arr[j]=tmp;
            }
        }
    }
}

void YeuCau(int arr[],int n){
    XepMang(arr,n);
    printf("So lon thu hai la:%d",arr[n-2]);
    printf("\nSo nho thu hai la:%d",arr[1]);

}
    
   

int main(){
int n;
printf("Nhap So Luong Phan Tu:");
scanf("%d",&n);
int arr[n];
NhapMang(arr,n);
YeuCau(arr,n);

}