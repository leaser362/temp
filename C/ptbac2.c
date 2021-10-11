#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    float nghiem=(float)-c/a;
    unsigned int d=b*b-a*4*c;
    float nghiem1=(float)((-b)+sqrt(d))/(2*a);
    float nghiem2=(float)((-b)-sqrt(d))/(2*a);
    float kep=(float)-b/(2*a);
    printf("Nhap a b c:\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a==0&&b==0){
        printf("PT Vo Nghiem");}
        else{
            if(a==0)
        printf("PT co Nghiem Phan Biet:X=%f",nghiem);
        else{
            if(d<0)
            printf("Pt Vo Nghiem");
            else{
                if(d=0)
                printf("PT No kep:%f",kep);
                else{
                    printf("PT co 2 no phan biet:");
                    printf("x1=%f",nghiem1);
                    printf("\n x2=%f",nghiem2);
                }
            }
        }
        }
    


}
