#include<stdio.h>

int NhapN(int n){
    n=0;
    while(n<=0){
        printf("Nhap N:");
        scanf("%d",&n);
    }
}

int NhapK(int n,int k)
{
    k = 0;
    while (k <= 0||k>=n)
    {
        printf("Nhap K:");
        scanf("%d", &k);
    }
}

int NhapX(int n)
{
    n = 0;
    while (n <= 0)
    {
        printf("Nhap X:");
        scanf("%d", &n);
    }
}

void NhapMang(int arr[],int n){
    int i,j=1;
    for(i=0;i<n-1;i++){
        printf("%d:",j);
        scanf("%d",&arr[i]);
        j++;
    }
}

void DoiViTri(int arr[],int x, int n, int k){
    int i;
    for(i=n-1;i>k;i--){
        arr[i]=arr[i-1];
    }
    arr[k]=x;
}

void In(int arr[],int n){
    int i;
    printf("Cac Phan Tu Trong Mang La:");
    for(i=0;i<n;i++){
        printf(" %d ",arr[i]);
    }
}

int main(){
    int n;
    n=NhapN(n);
    int arr[n];
    NhapMang(arr,n);
    int k;
    k=NhapK(n,k);
    int x;
    x=NhapX(x);
    DoiViTri(arr,x,n,k);
    In(arr,n);
    return 0;
}