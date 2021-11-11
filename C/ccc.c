#include<stdio.h>

void nhap(int *n,int arr[]){
    *n=0;
    while(*n<=0){
        printf("So cac chu day >0:");
        scanf("%d",n);
    }
    int i,j=1;
    for(i=0;i<*n;i++){
        printf("So thu %d trong day:",j);
        j++;
        scanf("%d",&arr[i]);
    }
}

void XepTang(int arr[],int n){
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

void in(int arr[],int n){
    int i;
    for(i=0;i<n;i++){
        printf(" %d ",arr[i]);
    }
}

int main(){
int n;
int arr[1000];
nhap(&n,arr);
XepTang(arr,n);
in(arr,n);
}