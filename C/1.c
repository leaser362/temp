#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int i=n;
	int sodao=0;
	while(i>0){
	sodao=sodao*10+i%10;
	i/=10;
}
if(sodao==n)
printf("So thuan nghich");
else 
printf("o so thuan nghich");
	
}
