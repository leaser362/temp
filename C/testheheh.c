#include<stdio.h>
 void cc(int *x){
     *x=(*x)*(*x)*(*x);
    // printf("%d",x);
 }
int main(){
int x=5;
cc(&x);
printf("%d",x);
}