#include<stdio.h>
#include<math.h>
void createline(int n){
	int i;
    for( i=1;i<=n;i++){
        printf(" X ");
    }printf("\n");
}
void tamgiac(int a,int b){
    if(a<b){
    	int i;
        int tangoc=a/b;
    for ( i=1; i<=b;i++){
        createline(round(tangoc*i));
    }
}
else{
	int i;
    int tangoc=b/a;
    for( i=1;i<=a;i++){
        createline(round(tangoc*i));
    }
}
}
int main(){
    int a=6;
    int b=3;
   // scanf("%d %d",&a,&b);
    tamgiac(a,b);
    
}
