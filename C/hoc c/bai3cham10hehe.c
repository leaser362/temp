#include <stdio.h>

int nhapn(){
    int n=0;
    while(n<=0){
        printf("Nhap N:");
        scanf("%d",&n);
    }
}

int demso(int n){
    int count=0;
    while(n>0){
        n=n/10;
        count++;
    }
    return count;
}

int demsole (int n){
    int count=0;
    int m=n;
   /* if(n<10&&n%2!=0){
    	count++;
    }*/
    //	else{
	
    while(n>0){
        m=n%10;
        if(m%2!=0){
            count++;
        
    }
    n/=10;

}
return count;
}

float tbc(int n){
   int sl=demso(n);
   int sum=0;
   while(n>0){
   	sum+=(n%10);
   	n/=10;
   }
    float tb=(float) sum/sl;
 return tb;
}

int main(){
int n;
n=nhapn();
printf("Dem so n:%d",demso(n));
printf("\nDem so le:%d",demsole(n));
printf("\nTrung binh cong %d so la:%f",demso(n),tbc(n));
}
