#include<stdio.h>
int main(){
    int a,b;
    printf("Add length:");
    scanf("%d",&a);
    printf("Add width:");
    scanf("%d",&b);
    int i,ii;
    for(i=1;i<=a;i++){
        for(ii=1;ii<=b;ii++){
            printf("X");
        }
        printf("\n");
    }
}