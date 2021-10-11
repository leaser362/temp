#include<stdio.h>

#define Length 20

void NhapMang(const int arr[]){
    int i;
    int j=1;
    for(i=0;i<=Length;i++){
        printf("Add The %d Number:",j);
        scanf("%d",&arr[i]);
        printf("\n");
        j++;
    }
}

void TinhTongSoLe(const int arr[]){
    int i;
    int sumodd=0;
    for(i=0;i<=Length;i++){
        if (arr[i]%2!=0){
            sumodd+=arr[i];
        }
    }
    printf("Sum of all odd number in arr is: %d",sumodd);
}

void TinhTongSoChan(const int arr[]){
    int i;
    int sumeven=0;
    for(i=0;i<=Length;i++){
        if(arr[i]%2==0){
            sumeven+=arr[i];
        }
    }
    printf("Sum of all even number in arr is:%d",sumeven);
}

int main(){
int arr[Length];
NhapMang(arr);
TinhTongSoLe(arr);
printf("\n");
TinhTongSoChan(arr);
}