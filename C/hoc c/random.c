#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int i;
    srand((int)time(0));
    int r;
    for (i=1;i<=100;i++){
        r=1+rand()%100;
        printf("Random %d is:%d\n",i,r);
    }

}
