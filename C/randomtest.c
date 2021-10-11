#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand((int)time(0));
    int r=1+rand()%6;
    printf("%d",r);
}