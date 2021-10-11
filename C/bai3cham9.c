#include<stdio.h>

void tinhtongcacchuso(int n){
    printf("Tinh tong cac chu so:");
    int sum;
    int thua;
    while(n!=0){
        thua=n%10;
        sum+=thua;
        n=n/10;
    }
    printf("%2d",sum);
}

void phantichthuasonguyento(int n){
    int i;
    printf("\nPhan tich thua so nguyen to:%d=1",n);
    for(i=2;i<=n;i++){
        if(n%i==0){
            while(n%i==0){
                n=n/i;
                printf("x%d",i);
            }
        }
        else 
        continue;
    }

}

int main(){
    int n;
    printf("Add N:");
    scanf("%d",&n);
    if(n<=0){
        printf("Add N>0 to continue");
    }
    else{
        tinhtongcacchuso(n);
        phantichthuasonguyento(n);

    }
    
}
