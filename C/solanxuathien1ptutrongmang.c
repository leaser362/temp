#include<stdio.h>
#include<stdbool.h>
void NhapMang(int arr[]){
    int i;
    int j=1;
    for(i=0;i<=4;i++){
        printf("%d:",j);
        j++;
        scanf("%d",&arr[i]);
    }
}

bool KiemSo(int arr[],int x){
    int i;
    for(i=0;i<=4;i++){
        if(arr[i]==x){
            return true;
        }
    }
    return false;
}

int DemSoLanXH(int arr[],int x){
    int i;
    int count=0;
    for(i=0;i<=4;i++){
        if(arr[i]==x){
            count++;
        }
    }
    return count;
}

int main(){
    int arr[5];
    int x;
    NhapMang(arr);
    printf("Add The One You Need In The Sequence:");
    scanf("%d",&x);
    if(KiemSo(arr,x)){
        if(DemSoLanXH(arr,x)==1)
            printf("%d appears 1 time in the sequence ",x);
        else
            printf("%d appears %d time in the sequence ",x,DemSoLanXH(arr,x));
        
    }
    else 
        printf("%d does not exit in the sequence");

}