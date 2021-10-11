#include<stdio.h>
#include<math.h>
int main(){
    int i,h;
    int j;
    printf("add height:");
    scanf("%d",&h);
    for(i=1;i<=h;i++){
        for(j=1;j<=(2*i-1);j++){
            if(abs(h-j)<=(i-1)){
			
            printf("X");}
            else{
			
            printf(" ");
        }
        }
        printf("\n");
    }
}
