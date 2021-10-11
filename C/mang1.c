#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define Max 20

int main(){

    srand(time(0));
    int i;
    int arg[Max];
    for (i=0;i<=Max;i++){
        arg[i]=rand();
    }
    for(i=0;i<=Max;i++){
        printf("%d\n",arg[i]);
    }
}