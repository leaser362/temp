#include <stdio.h>
int main() {
	int n;
	int dem=0;
	scanf("%d",&n);
	while(n>0){
		n=n/10;
		dem++;
	}
	printf("So chu so la:%d",dem);
	return 0;
}
