#include<stdio.h>

#define Max 19

void NhapMang(const int arr[]){
int i,j;
j=1;
for(i=0;i<=Max;i++){
    printf("Add the %d number:",j);
    scanf("%d",&arr[i]);
    printf("\n");
    j++;
}
}

void TimSoLonNhat(const int arr[]){
    int i;
    int max=arr[0];
    for(i=1;i<=Max;i++){
        if(max<arr[i]){
            max=arr[i];
        }        
    }
    printf("The Biggest One is:%d\n",max);
}

void TimSoNhoNhat(const int arr[]){
    int i;
    int min=arr[0];
    for(i=1;i<=Max;i++){
        if(min>arr[i]){
            min=arr[i];
        }        
    }
    printf("The Smallest One is:%d",min);
}

int main (){
int arr[Max];
NhapMang(arr);
TimSoLonNhat(arr);
TimSoNhoNhat(arr);
}