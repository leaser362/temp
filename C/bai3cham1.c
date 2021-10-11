#include<stdio.h>
int main(){
    int m,n,i,ii;
    printf("Add hang:\n");scanf("%d",&m);
    printf("Add cot:\n");scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(ii=1;ii<=m;ii++){
            printf("%d\t",ii);
        }
        printf("\n\n\n");
    }
    return 0;
}   
