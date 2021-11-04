#include<stdio.h>

void nhap(int *arr,int *n){
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
}
void DoiCho(int n,int *arr,int k,int x){
    int i;
    for(i=n-1;i>k;i--){
        arr[i]=arr[i-1];
    }
    arr[k]=x;
}


int main(){
    int n;
    int arr[1000];
    nhap(arr,&n);
    int k=0,x;
    printf("Nhap X=");
    scanf("%d",&x);  
    while(k<=0||k>n){
        printf("Nhap K:");
        scanf("%d",&k);
    }
    DoiCho(n,arr,k,x);
    int i;
    for(i=0;i<n;i++){
        printf(" %d ",arr[i]);
    }
}