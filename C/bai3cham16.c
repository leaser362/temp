
#include<stdio.h>

int TinhCkn(int k, int i){
if(k==0||k==i){
    return 1;
}
return TinhCkn(k-1,i-1)+TinhCkn(k,i-1);
}

int main(){
    int n;
    int i;
    int k;
    printf("The Number Of Row:");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        for(k=0;k<=i;k++){
        printf(" %d ",TinhCkn(k,i));
        }
        printf("\n");
    }
}
