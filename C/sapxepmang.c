#include<stdio.h>

int NhapDoLonDaySo(){
    int n=0;
    while(n<=0){
    printf("Add The Amount of Sequence:");
    scanf("%d",&n);
    }
    return n;
}

void NhapDaySo(int arr[],int n){
    int i;
    int j=1;
    for(i=0;i<=n-1;i++){
        printf("Add The %d Number Of Sequence:",j);
        scanf("%d",&arr[i]);
        printf("\n");
        j++;
    }
}

void SapXepDaySoTangDan(int arr[],int n){
    int i;
    int j;
    int tam;
    printf("The Sequence Increasing:");
    for(i=0;i<=n-2;i++){
        for(j=i;j<=n-1;j++){
            if(arr[i]>arr[j]){
                tam=arr[i];
                arr[i]=arr[j];
                arr[j]=tam;
            }
        }
    }
    for(i=0;i<=n-1;i++){
        printf(" %d ",arr[i] );
    }
}

void SapXepDaySoGiamDan(int arr[], int n){
    int i;
    int j;
    int tam;
    printf("\nThe Sequence Decreasing:");
    for(i=0;i<=n-2;i++){
        for(j=i;j<=n-1;j++){
            if(arr[i]<arr[j]){
                tam=arr[i];
                arr[i]=arr[j];
                arr[j]=tam;
            }
        }
    }
    for(i=0;i<=n-1;i++){
        printf(" %d ",arr[i] );
    }
}

int main(){
int n;
n=NhapDoLonDaySo();
int arr[n];
NhapDaySo(arr,n);
SapXepDaySoTangDan(arr,n);
SapXepDaySoGiamDan(arr,n);
}