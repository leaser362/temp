#include<stdio.h>
#define Max 5

void Nhap(int arr[]){
    int i;
    int j=1;
    for(i=0;i<=Max-1;i++){
        printf("%d:",j);
        scanf("%d",&arr[i]);
        j++;
        printf("\n");
    }
}

void HienThi(int arr[]){
    int i;
    printf("\nThe sequence after being reversed:");
    for(i=Max-1;i>=0;i--){
        printf(" %d ",arr[i]);
    }
}

int main(){
    int arr[Max];
    Nhap(arr);
    HienThi(arr);
}