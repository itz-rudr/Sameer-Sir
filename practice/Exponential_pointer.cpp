//To print Exponential series using pointer
#include<stdio.h>
#include<math.h>
int main(){
	int a,n;
	float f=1,s=1;
	int *p,*q;
	float *r,*t;
	printf("Enter value and terms: ");
	scanf("%d%d",&a,&n);
	p=&a;
	q=&n;
	r=&f;
	t=&s;
	for(int i=1;i<=n;i++){
		*r=*r*i;
		*t=*t+pow(*p,i)/(*r);
	}
	printf("Sum of exponential series of\n%d value & %d terms is: %.2f",*p,*q,*t);
}