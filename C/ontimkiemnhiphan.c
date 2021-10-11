#include<stdio.h>
#include<stdbool.h>

void XepMang(int arr[]){
    int i,j;
    int tmp;
    for(i=0;i<=3;i++){
        for(j=i+1;j<=4;j++){
            if(arr[i]>arr[j]){
                tmp=arr[i];
                arr[i]=arr[j];
                arr[j]=tmp;
            }
        }
    }
}

bool TimNhiPhan(int arr[],int x){
   int left=0,right=4;
   int mid=(left+right)/2;
   XepMang(arr);
   while(left<=right){
       mid=(left+right)/2;
       if(arr[mid]==x){
           return true;
       }
       else{
           if(arr[mid]>x){
               right=mid-1;
           }
           else{
               left=mid+1;
           }
       }
   }
   return false; 
}

int main(){
    int x;
    printf("Nhap X:");
    scanf("%d",&x);
int arr[5]={6,3,43,2,1};
if(TimNhiPhan(arr,x)){
    printf("Ton Tai");
}
else{
    printf("Ko Ton Tai");
}
return 0;
}