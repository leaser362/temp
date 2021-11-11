#include<stdio.h>

void nhap(int arr[],int *n,int *x){
    *n=0;
    while(*n<=0){
        printf("Nhap N:");
        scanf("%d",n);
    }
    int i;
    for(i=0;i<(*n-1);i++){
        printf("arr[%d]=",i);
        scanf("%d",&arr[i]);
    }
    *x=0;
    while(*x<=0){
        printf("Nhap X:");
        scanf("%d",x);
    }
}

void SapXepTang(int arr[],int n){
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

void In1(int arr[],int n){
    int i;
    for(i=0;i<n-1;i++){
        printf(" %d ",arr[i]);
    }
}

void In2(int arr[],int n){
    int i;
    for (i = 0; i < n ; i++)
    {
        printf(" %d ", arr[i]);
    }
}

int main(){
    int n;
    int arr[1000];
    int x;
    nhap(arr,&n,&x);
    printf("Mang Truoc Sap Xep:");
    In1(arr,n);
    SapXepTang(arr,n);
    printf("\nMang Sau Khi Sap Xep:");
    In1(arr,n);
    arr[n-1]=x;
    printf("\nMang Sau Khi Them X:");
    In2(arr,n);
}