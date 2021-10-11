#include<stdio.h>
#include<math.h>

void NhapMang(int arr[],int n){
    int i;
    int j=1;
    for(i=0;i<=n-1;i++){
        printf("%d:",j);
        scanf("%d",&arr[i]);
        j++;
    }
}

void XepMangTang(int arr[],int n){
    int i,j,tmp;
    for(i=0;i<=n-2;i++){
        for(j=i+1;j<=n-1;j++){
            if(arr[i]>arr[j]){
                tmp=arr[i];
                arr[i]=arr[j];
                arr[j]=tmp;
            }
        }
    }
}

void TimSoGanX(int arr[],int n,int x){
    int i;
    int min;
    int arrcp[n];
    for(i=0;i<n-1;i++){
        arrcp[i]=abs(arr[i]-x);
    }
    XepMangTang(arr,n);
    printf("So gan %d nhat la %d",x,abs(arrcp[0]+x));
}

int main(){
int n;
printf("Nhap N:");
scanf("%d",&n);
int x;
printf("Nhap X:");
scanf("%d",&x);
int arr[n];
NhapMang(arr,n);
TimSoGanX(arr,n,x);
    return 0;
}