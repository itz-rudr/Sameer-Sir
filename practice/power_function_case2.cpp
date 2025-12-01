//To print power using fuction calling case 2
#include<stdio.h>
#include<math.h>
int power(){
	int a,b;
	printf("Enter a number and its power: ");
	scanf("%d%d",&a,&b);
	return pow(a,b);
}
int main(){
	printf("Value is %d",power());
}