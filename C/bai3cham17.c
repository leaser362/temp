#include<stdio.h>
#include<stdbool.h>

bool SoChan(int n){
    return n%2==0;
}

bool SoLe(int n){
    return n%2!=0;
}

bool KoTangTraiPhai(int n){
    int a,b;
    int i=10000;
    a=n/i;
    i/=10;
    n%=i;
    while(n>0){
        b=n/i;
        i/=10;
        n%=i;
        if (a<b){
            return false;
        }
        a=b;
    }
    return true;
}

bool KoGiamTraiPhai(int n){
    int a,b;
    int i=10000;
    a=n/i;
    i/=10;
    n%=i;
    while(n>0){
        b=n/i;
        i/=10;
        n%=i;
        if(a>b){
            return false;
        }
    }
    return true;
}

void CauA(int n){
    if(SoChan(n)&&KoTangTraiPhai(n)){
        printf(" %d ",n);
    }
}

void CauB(int n){
    if(SoLe(n)&&KoGiamTraiPhai(n)){
        printf(" %d ",n);
    }
}

void CauC(int n){
    int sumchan=0;
    int sumle=0;
    int m;
    int n1=n;
    while(n>0){
        m=n%10;
        n/=10;
        if(SoChan(m)){
            sumchan+=m;
        }
        if(SoLe(m)){
            sumle+=m;
        }
    }
    if(sumchan==sumle){
        printf(" %d ",n1);
    }
}

int main(){
int i;
for(i=10000;i<=99999;i++){
    //CauA(i);
    //CauB(i);
    CauC(i);
}
}