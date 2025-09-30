//to calculate simple interest
#include<stdio.h>
int main(){
	float p,r,t,SI;
	printf("Enter principle amount(in Rupee) ");
	scanf("%f",&p);
	printf("Enter rate(in %) ");
	scanf("%f",&r);
	printf("Enter time(in years) ");
	scanf("%f",&t);
	SI=p*r*t/100;
	float amount=SI+p;
	printf("Simple Interest is %.2f\nAmount is %.2f",SI,amount);
}