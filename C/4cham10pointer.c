#include<stdio.h>
#include<stdbool.h>

/*void nhap(int *arr, int *n)
{
    *n = 0;
    while (*n <= 0)
    {
        printf("Nhap n > 0: ");
        scanf("%d", n);
    }
    int i;
    for (i = 0; i < *n; i++)
    {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}

int main(){
    int n;
    int arr[10000];
    nhap(arr,&n);
}*/

void nhap(int *arr,int *n){
    *n=0;
    while(*n<=0){
        printf("Nhap N:");
        scanf("%d",n);
    }
    int i;
    for(i=0;i<*n;i++){
        printf("arr[%d]=",i);
        scanf("%d",&arr[i]);
    }
}

bool KT(int arr,int *arr,int index){
    int i;
    for(i=0;i<index;i++){
        if(arr[i]==arr){
            return false;
        }
    }
    return true;
}

void xuat(int *arr,int n){
    int i;
    printf("Cac So Xuat Hien La");
    for(i=0;i<n;i++){
        if()
    }
}

int main(){
    int n;
    int arr[99999];
    nhap(arr,&n);
}