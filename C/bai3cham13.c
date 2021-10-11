#include<stdio.h>
#include<stdbool.h>
#include<math.h>

int NhapN(){
    int n=0;
    while (n<=0){
        printf("Add N>0:");
        scanf("%d",&n);
    }
    return n;
}

bool KTrNgTo(int n){
    if(n<2){
        return false;
    }
    int i;
    for(i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

void InNSoNgto(int n){
    int i=2;
    printf("All from 1st to %dth prime number: ",n);
    while(n>0){
    if(KTrNgTo(i)){
        printf("  %2d  ",i);
        n--;
    }
    i++;
    }
}

void InDayFibonacci(int n){
    int f0=0;
    int f1=1;
    int fn;
    int i=2;
       printf("\nFibonacci:\n");
        printf("F0=0");
    if(n>=1){
        printf("\nF1=1");
    }
    if(n>=2){
        while(i<=n){
            fn=f1+f0;
            printf("\nF%d=%d",i,fn);
            f0=f1;
            f1=fn;
            i++;
        }
    
}
}

bool KiemTraSoChinhPhuong(int n){
    int canso=sqrt(n);
    if(canso*canso==n){
        return true;
    }
    else{
        return false;
    }
    
}

void InNSoChinhPhuong(int n){
int i=1;
printf("\nAll Square Number Is:");
while(n>0){
if(KiemTraSoChinhPhuong(i)){
    printf(" %d ",i);
    n--;
}
i++;
}
}

int main(){
int n;
n=NhapN();
InNSoNgto(n);
InDayFibonacci(n);
InNSoChinhPhuong(n);
return 0;
}
