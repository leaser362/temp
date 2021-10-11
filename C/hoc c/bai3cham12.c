#include<stdio.h>
#include<math.h>
#include<stdbool.h>

int nhapn(){
    int n=0;
    while(n<=0){
        printf("Add N>0:");
        scanf("%d",&n);
    }
}

void lietkeuoc(int n){
    int i;
    printf("\nAll the divisor of %d is:",n);
    for(i=1;i<=n;i++){
        if(n%i==0){
            printf(" %2d ",i);
        }
    }
}

void demuoc(int n){
    int i;
    int count=0;
    for(i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    printf("\nThe number divisor of %d is: %d",n,count);
}

bool kiemtrangto(int n){
    int i;
    if (n<2){
    	return false;
	}
    for(i=2;i<=sqrt(n);i++){
        if(i%n==0){
          return false;  
        }
        
    }
    return true;
}

void lietkeuocngto(int n){
    int i,j;
    int count=0;
    printf("\nAll prime divisor number of %d is:",n);
    for(i=1;i<=n;i++){
        if(n%i==0){
            if(kiemtrangto(i))
            printf( " %d ",i);
			}

        }
        
    }



int main(){
int n;
n=nhapn();
lietkeuoc(n);
demuoc(n);
lietkeuocngto(n);
}
