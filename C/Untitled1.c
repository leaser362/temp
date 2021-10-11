#include<stdio.h>
#include<math.h>
int main(/*int argc, char *argv[]*/) {
	float a;
	float b;
	float c;
		//kiem tra he so
		printf("vui long nhap he so a b c \n");
		scanf("%f%f%f", &a, &b, &c);
		if (a == 0) {
			if (b == 0) {
				printf("phuong trinh vo nghiem");
				}else{
					printf("phuong trinh co nghiem x = %f", (float)-c/a);//them (float) xoa ngoac vi deo thich :)))))
				}
		}	
	//tinh denta
	float d = b*b - 4*a*c;
/*	float x1;
	float x2;*/
	if (d < 0)
	{
		printf("phuong trinh vo nghiem");
		}
	else{ if (d == 0)//them d==0 , them{ truoc else(1)
	/*{*/
		printf("phuong trinh co nghiem kep x1=x2=%f", (float)-b/(2*a));//them (float) xoa ngoac vi deo thich :)))))
/*	}*/
	else/* if (d > 0)*/
/*	{*/
	    printf("phuong trinh co 2 nghiem x1 = %f\n x2 = %f\n",(float) (-b + sqrt(d))/(2*a),(float) (-b - sqrt(d))/(2*a));//them (float) xoa ngoac vi deo thich :)))))
/*	}*/
}//cua (1)
	return 0;
}
