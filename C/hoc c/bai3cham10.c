#include<stdio.h>

int nhapn(){
   int n=0;
    while (n<=0){
        printf("Add N>0:");
        scanf("%d",&n);
    }
    return n;
}
int demsole(int n){
    int m=0;
    int count=0;
  //  if(n<10){
    	//if(n%2!=0)
    	//count++;
	//}
    //else{
    while(n>0){
        m=n%10;
        n=n/10;
        if(m%2!=0){
            count++;
        }
    }
//}
    printf("\nSo chu so le la:%d",count);
    return 0;
}

int tbcnso(int n){
int m=0;
int sum=0;
int count=0;
float f=(float)sum/count;
//if(n<10)
//printf("\nTrung Binh cong cua 1 chu so la:%d",n);
//else
  // {
	 while(n>0){
         if(n<10){
            sum+=n;
            break;
         }
         else{
         m=0;
        m=n%10;
        n=n/10;
        sum+=m;
        count++;
         }
    }
    printf("\nTrung Binh cong cua %d chu so la:%f",count,f);
//}
return 0;
}
int main(){
int n;
//scanf("%d",&n);
n=nhapn();
demsole(n);
tbcnso(n);
return 0;
}
