#include<stdio.h>
#include<stdbool.h>

void NhapMang(int arr[],int n){
    int i,j=1;
    for(i=0;i<n;i++){
        printf("%d:",j);
        scanf("%d",&arr[i]);
        j++;
    }
}

/*void SapXepTang(int arr[],int n){
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
}*/


bool KtraDoiXung(int arr[], int n){
    int count=0;
    int i=1;
    int mid = (n - 1) / 2;
   // SapXepTang(arr,n);
    if(n%2==0){
        while(i<=n/2){
            if(arr[i]!=arr[n-i-1]){
                return false;
            }
            i+=1;
        }
    }
    else{
        while(i<=(n/2+1))
        {
            if(arr[mid]==arr[i]){
                continue;
            }
            if(arr[i]!=arr[n-i-1]){
                return false;
            }
            i++;
        }
    }
    return true;
}

int main(){
    int n;
    printf("Nhap N:");
    scanf("%d",&n);
    int arr[n];
    NhapMang(arr,n);
    if(KtraDoiXung(arr,n)){
        printf("Mang Doi Xung");
    }
    else{
        printf("Mang Khong Doi Xung");
    }
    return 0;

}