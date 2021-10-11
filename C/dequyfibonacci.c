#include<stdio.h>
long long fibonaci(int a){
if (a==1||a==0)
return a;
else
return fibonaci(a-2)+fibonaci(a-1);
}
int main(){
    int i;
    printf("Add i:");
    scanf("%d",&i);
    printf("The %d number of fibonacci number is: %d",i,fibonaci(i));
}