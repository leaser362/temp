#include<stdio.h>
#include<math.h>
int main(){
    int h,i,j;
    printf("Add Height:");
    scanf("%d",&h);
    for(i=1;i<=h;i++){
        for(j=1;j<=2*h-1;j++){
            if(abs(h-j)<=i-1)
            printf("%d",i-abs(h-j));
            else
            printf(" ");
        }
        printf("\n");
    }
}