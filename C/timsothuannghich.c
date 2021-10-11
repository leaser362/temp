#include<stdio.h>
#include<stdbool.h>
bool ktrathuannghich(unsigned int i){
    int luu;
    luu=i;
    int dao=0;
    while(i>0){
    dao=dao*10+i%10;
    i=i/10;
  }
  return dao==luu;
}
bool kiemtratinhchiahet(unsigned int i,int k){
   if(k==0)
   return false;
   else 
   return i%k==0;
}

int main(){
    int k;
    unsigned int i;
    printf("Add K:");
    scanf("%d",&k);
    for(i=10000000;i<100000000;i++){
        if(kiemtratinhchiahet(i,k)&&ktrathuannghich(i))
        printf(" %u ",i);
       
    }
    return 0;
}
