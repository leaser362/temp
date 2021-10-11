
#include<stdio.h>
#include<math.h>
#include<stdbool.h>

bool SoThuanNghich(int n){
    int m=n;
    int dao=0;
    while(n>0){
        dao=(dao*10)+(n%10);
        n/=10;
    }
    if(dao==m){
        return true;
    }
    else{
        return false;
    }
}

bool KoChuaSoSau(int n){
    int m;
    while(n>0){
        m=n%10;
        if(m==6){
            return false;
        }
        n/=10;
    }
    return true;
}

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

bool TongNgTo(int n){
    int sum=0;
    while(n>0){
        sum+=(n%10);
        n/=10;
    }
    if(KiemTraSoNguyenTo(sum)){
        return true;
    }
    else{
        return false;
    }
}

int main(){
int i;
for(i=10000000;i<=99999999;i++){
    if(SoThuanNghich(i) && KoChuaSoSau(i) && TongNgTo(i)){
        printf(" %d ",i);
    }
}
return 0;
}
