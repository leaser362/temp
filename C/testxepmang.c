#include<stdio.h>
#define Max 5

void NhapMang(int arr[]){
    int i;
    int j=1;
    for(i=0;i<=Max;i++){
        printf("%d:",j);
        scanf("%d",&arr[i]);
        j++;
    }
}

void XepTang(int arr[]){
    int i;
    int j;
    int tam;
    for(i=0;i<=Max-1;i++){
        for(j=i+1;j<=Max;j++){
            if(arr[i]<arr[j])
            {tam=arr[i];
            arr[i]=arr[j];
            arr[j]=tam;}
        }
    }
    for(i=1;i<=Max;i++){
        printf(" %d ",arr[i] );
    }
}

int main(){
int arr[Max];
NhapMang(arr);
XepTang(arr);
}