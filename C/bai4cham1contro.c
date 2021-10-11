#include<stdio.h>

void Nhap(int *n){
    while(n<=0){
        printf("Nhap N:");
        scanf("%d",n);
    }
    int i,j=1;
    for(i=0;i<n;i++){
        printf("%d:",j);
        scanf("%d",&arr[i]);
    }
}

void MinMax(int *arr,int *n,int *min,int *max){
    int i,j,tmp;
    for(i=0;i<n-1,i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                tmp=arr[i];
                arr[i]=arr[j];
                arr[j]=tmp;
            }
        }
    }
    min=arr[0];
    max=arr[n-1];
}

int main(){
    int n=0;
    int arr[n];
    NhapN(&n);
    int min,max;
    MinMax(arr,&n,&min,&max);
    printf("Max=%d\nMin=%d",max,min);
}