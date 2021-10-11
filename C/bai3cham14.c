#include<stdio.h>
#include<stdbool.h>
#include<math.h>

bool KiemTraSoNguyenTo(int n){
    int i;
    if(n<2){
        return false;
    }
    for(i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

bool TungChuSoNguyenTo(int n){
    int m=0;
    while(n>0){
        m=n%10;
        n=n/10;
        if(!KiemTraSoNguyenTo(m)){
            return false;
        }
    }
    return true;
}

bool TongCacSoNgTo(int n){
    int sum=0;
    int m;
    while(n>0){
        sum+=(n%10);
        n/=10;
    }
    if(KiemTraSoNguyenTo(sum)){
        return true;
    }
        return false;
}

int main(){
int i;
printf("All numbers That Have Eight Number ");
for(i=20000000;i<=77777777;i++){
    if(TungChuSoNguyenTo(i)&&TongCacSoNgTo(i)&&KiemTraSoNguyenTo(i))
    printf(" %10d ",i);
}
return 0;
}
