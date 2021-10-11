#include<stdio.h>
#include<math.h>
int taoline(int n,int i){
    for(i=1;i<=n;i++){
        printf("X");
    }
    printf("\n");
}
 
int main(){
    int height,width;
    int i;
    printf("Add Height:\n");scanf("%d",&height);
    printf("Add Width:");scanf("%d",&width);
    float tangoc=width/height;
    for(i=1;i<=height;i++){
        taoline(round(i*tangoc),i);
    }

}
