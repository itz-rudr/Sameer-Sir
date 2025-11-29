//To print sum of n no.s using function calling case 2
#include<stdio.h>
int sum(){
	int n;
	printf("Enter total terms: ");
	scanf("%d",&n);
	int s=0;
	for(int i=0;i<=n;i++){
		s+=i;
	}
	return s;
}
int main(){
	printf("Sum of n terms is: %d",sum());
}