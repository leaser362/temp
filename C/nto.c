#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
	int i;
	int count=0;
	for (i=2;i<=sqrt(n);i++){
		if(n%i==0){
			count++;
		}
	}
	if(count==0){
		printf("la so ngto");
	}
	else
	printf("o la so nguyen to");
	return 0;
}
