#include<stdio.h>
#include<math.h>
int main(){
    int i,h;
    int j;
    printf("add height:");
    scanf("%d",&h);
    for(i=1;i<=h;i++){3
        for(j=1;j<=(2*h-1);j++){
            if(abs(h-j)<=(i-1))
            printf(" X ");
            else
            printf("   ");
            
        }
        printf("\n")
    }
}