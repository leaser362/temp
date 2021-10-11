#include<stdio.h>

#define Length 10

void NhapMang(const int arr[]){
    int i;
    for(i=0;i<=Length;i++){
        scanf("%d",&arr[i]);
    }
}

int HienThi(int arr[]){
    int i;
    for (i=0;i<=Length;i++){
        printf("%d\n",arr[i]);
    }
}

int main(){
int arr[Length];
NhapMang(arr);
HienThi(arr);
}