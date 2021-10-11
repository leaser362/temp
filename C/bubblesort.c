#include<stdio.h>
#include<stdbool.h>
#define Max 5

void NhapMang(int arr[]){
    int i;
    int j=1;
    for(i=0;i<=Max-1;i++){
        printf("Add The %d of The Sequence : ",j);
        scanf("%d",&arr[i]);
        printf("\n");
        j++;
    }
}

void XepbubblesortTangDan(int arr[]){
    int i;
    int j;
    int tmp;
    bool swap=false;
    for(i=0;i<=Max-2;i++){
        swap=false;
        for(j=0;j<=Max-2-i;j++){
            if(arr[i]<arr[i+1]){
                swap=true;
                tmp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=tmp;
            }
        }
        if(swap==false){
            break;
        }
    }
}

int main(){
    int arr[Max];
    NhapMang(arr);
    XepbubblesortTangDan(arr);
    int i;
    for(i=0;i<=Max-1;i++){
        printf(" %d ",arr[i]);
    }
}