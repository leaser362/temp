#include<stdio.h>

void NhapMang( int arr[],int n){
    int i,j=1;
    for(i=0;i<n;i++){
        printf("%d:",j);
        scanf("%d",&arr[i]);
        j++;
    }
}

void TinhTrungBinh(int arr[],int n){
    int i,j=1;
    int tongchan=0,tongle=0;
    int counteven=0,countodd=0;
    for(i=0;i<n;i++){
        if(arr[i]%2==0){
            counteven++;
            tongchan+=arr[i];
        }
        else{
            countodd++;
            tongle+=arr[i];
        }
    }
    float a=(float)tongchan/counteven;
    float b=(float)tongle/countodd;
    printf("Trung Binh Cong Cac So Chan:%f",a);
    printf("\nTrung Binh Cong Cac So Le :%f",b);
}

int main(){
    int n;
    printf("Nhap N:");
    scanf("%d",&n);
    int arr[n];
    NhapMang(arr,n);
    TinhTrungBinh(arr,n);
}