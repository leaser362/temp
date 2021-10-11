#include<stdbool.h>
#include<stdio.h>

int nhapn(){
    int n=0;
    while (n<=0){
        printf("\nAdd N>0:");
        scanf("%d",&n);
    }
}

bool ktratang(int n){
    int a;
    int b;
    a=n%10;
    n=n/10;
    while(n>0){
        b=n%10;
        n=n/10;
        if(a<=b){
            return false;
        }
        a=b;
    }
return true;
}

int stnum( int n){
    int stn;
    while (n>0){
        stn=n%10;
        n=n/10;
    }
    return stn;
}

int repeatof1stnum( int n){
    int count;
    int m;
    while(n>0){
        m=n%10;
        if(m==stnum(n)){
            count ++;
        }
        n=n/10;
    }
    return count;
}

int main(){
    int n;
    n=nhapn();
    if(ktratang(n)){
        printf("\nFrom left to right , all number is Increasing");
    }
    else{
        printf("\nFrom left to right, all number is Decresing");
    }
    printf("\nThe First Number of %d is: %d",n,stnum(n));
    printf("\nRepeat of The first number of %d is:%d",n,repeatof1stnum(n));
}
