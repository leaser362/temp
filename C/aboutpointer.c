#include<stdio.h>

int main(){
    int i;
    int a=22,c=10;
    float b=34.2323;
    int *p;
    float *f=&b;
    printf("%x",p);
    p=&a;
    printf("%d",*p);
    p=&c;
    printf("\n%d",*p);
    --------------------
    int arr[]={5,23,43,435,11};
    int *p=arr;
    printf(" %x ",arr);
    printf(" %x ",&arr[0]);
    printf(" %x ",p);
    -----------------------
    int arr[] = {5, 23, 43, 435, 11};
    int *p =arr;

    for(i=0;i<5;i++){
        printf(" %d ",arr[i]);
    }
    printf("\n");
    for(i=0;i<5;i++){
        printf(" %d ",*(p+i));
    }
    printf("\n");
    return 0;
}