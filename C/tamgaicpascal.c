#include<stdio.h>

int Pascal(int n, int k){
if(k==0||k==n){
    return 1;
}
return pascal(n-1,k-1) +Pascal(n-1,k);   
}

int main(){
    printf("The Number Of Row:");
    int r;
    scanf("%d",&r);
    int n;
    int k;
    for(n=0;i<=r;n++){
        for(k=0;k<=n;k++){
            pascal(n,k);                                                                       
        }
    }
}