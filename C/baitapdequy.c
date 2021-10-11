#include<stdio.h>

int ucln(int a,int b){
    while (a!=b){
        if (a>b)
        a=a-b;
        else b=b-a;
    }
    return a;
}
int bcnn(int a, int b ){
    return (a*b)/ucln(a,b);
}
int main(){
    int a,b;
    printf("Nhap a b:");
    scanf("%d %d",&a,&b);
    printf("UCLN:%d\n",ucln(a,b));
    printf("BCNN: %d",bcnn(a,b));
    return 0;
}