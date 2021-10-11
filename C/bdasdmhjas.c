#include<stdio.h>
#include<math.h>
int main(){
	int n,i;
	int count=0;
	scanf("%d",&n);
	if(n<=2){
		printf("o la so ngto");
	}
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0){
			count++;
		}
	}
		if(count==0){
			printf("la so ngto");
		}
		else {

		printf("o la so ngto");
	}
}
/*
#include <stdio.h>
#include <math.h>
 
int main(){
    int n,i;
    printf("\nNhap n = ");
    scanf("%d", &n);
    if(n < 2){
        printf("\n%d khong phai so nguyen to", n);
        return 0;
    }
    int count = 0;
    for(i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            count++;
        }
    }
    if(count == 0){
        printf("\n%d la so nguyen to", n);
    }else{
        printf("\n%d khong phai so nguyen to", n);
    }
}*/
