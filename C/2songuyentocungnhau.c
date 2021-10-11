#include<stdio.h>
int main(){
    int a,b;
    int c,d;
    printf("nhap a,b:");
    scanf("%d",&a,&b);
    c=a;
    d=b;
    while (a!=b)
    {
        if(a>b)
        a=a-b;
        else b=b-a;
    }
    if(a==1)
    printf("%d & %d la 2 so nguyen to cung nhau",c,d);
    else printf("%d & %d la 2 so nguyen to khong cung nhau",c,d);
}