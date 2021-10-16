#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

bool XuatHienh(int arr,int XuatHien[],int size){
    int i;
    for(i=0;i<size;i++){
        if(arr==XuatHien[i]){
            return true;
        }
    }
    return false;
}

void TaoMang(int arr[], int n){
    srand(time(0));
    int i;
    int size=0;
    int XuatHien[n];
    for(i=0;i<n;i++){
        XuatHien[i]=0;
    }
    i=0;
    while(i<n){
        int u=rand();
        if(!XuatHienh(u,XuatHien,size)){
            arr[i]=u;
            i++;
            size++;
        }
    }

}

int main(){
    int n=0;
    while(n<=0){
        printf("Nhap N:");
        scanf("%d",&n);
    }
    int arr[n];
    TaoMang(arr,n);
    int i;
    printf("Cac So Trong Mang:");
    for(i=0;i<n;i++){
        printf("\n %d ",arr[i]);
    }
}