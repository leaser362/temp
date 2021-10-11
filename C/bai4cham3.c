#include<stdio.h>

void NhapMang(int arr[], int n){
    int i,j=1;
    for(i=0;i<=n-1;i++){
        printf("%d:",j);
        scanf("%d",&arr[i]);
        j++;
    }
}

void HienMang(int arr[], int n){
    int i;
    for(i=0;i<=n-1;i++){
        printf(" %d ",arr[i]);
    }
}

void XepTang(int arr[], int n){
    int i,j;
    int tmp;
    for(i=0;i<=n-2;i++){
        for(j=i+1;j<=n-1;j++){
            if(arr[i]>arr[j]){
                tmp=arr[i];
                arr[i]=arr[j];
                arr[j]=tmp;
            }
        }
    }
    HienMang(arr,n);
}

void XepGiam(int arr[], int n)
{
    int i, j;
    int tmp;
    for (i = 0; i <= n - 2; i++)
    {
        for (j = i + 1; j <= n - 1; j++)
        {
            if (arr[i] < arr[j])
            {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    HienMang(arr,n);
}

int main(){
    int n;
    printf("Nhap So Phan Tu:");
    scanf("%d",&n);
    int arr[n];
    NhapMang(arr,n);
    printf("\nMang Truoc Khi Doi:");
    HienMang(arr,n);
    printf("\nMang Tang:");
    XepTang(arr,n);
    printf("\nMang Giam");
    XepGiam(arr,n);
    

}