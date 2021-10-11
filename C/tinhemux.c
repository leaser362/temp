#include<stdio.h>
#include<math.h>
#include <windows.h>
int main(){
    double kq=0;
    double a;
    double x;
    int i=0;
    long long xmuk=1;
    long long kgiaithua=1;
    printf("Degree of acuracy:");
    scanf("%lf",&a);
    printf("\nAdd x of e^x ");
    scanf("%lf",&x);
    long long tam=(float)xmuk/kgiaithua;
    while(tam>=a){
        i++;
        kq+=tam;
        xmuk*=x;
        kgiaithua*=i;
        tam=(float)xmuk/kgiaithua;
        
    }
    printf("Answer of e^%lf :%0.8lf",x,kq);
    return 0;
}