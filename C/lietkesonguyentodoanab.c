#include<stdio.h>
#include<stdbool.h>
#include<math.h>

bool songuyento( int j, int i){
    int count=0;
    for(j=2;j<=sqrt(i);j++){
        if(i%j==0){
            count++;
        }
    }
    return count==0;
   }

int main(){
    int a,b;
    int i;
    int j;
    printf("Add [a,b]:");
    scanf("%d",&a);
    scanf("%d",&b);
    if((a>b)||a<0||b<0)
    printf("Dont add negative number please!");
    else{
        printf("Cac so nguyen to la:\n");
        for(i=a;i<=b;i++){
          if ( songuyento(j,i))
          printf(" %4d ",i);
        }

    }
}