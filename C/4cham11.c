#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>

bool KTXH(int x,int *arr,int index){
    int i;
    for(i=0;i<index;i++){
        if(arr[i]==x){
            return false;
        }
    }
    return true;
}

void nhap(int *n,int *arr){
    *n=0;
    while(*n<=0){
        printf("Nhap N:");
        scanf("%d",n); 
    }
    srand(time(0));
    int i;
    while(i<*n){
        int x=rand();
        if(KTXH(arr[i],arr,i)){
            arr[i]=x;
            i++;
        }
    }
}

void xuat(int *arr,int n){
    int i;
    for(i=0;i<n;i++){
       printf(" %d ",arr[i]); 
    }
}

int main(){
    int n;
    int arr[100000];
    nhap(&n,arr);
    xuat(arr,n);
}