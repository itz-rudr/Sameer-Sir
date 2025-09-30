//To print sum of even and odd numbers separately and their product of their sum (from a given number)
#include<stdio.h>
int main(){
	int n,rev,ld;
	printf("Enter a number\n");
	scanf("%d",&n);
	int even_sum =0,odd_sum=0;
	while(n!=0){
		ld=n%10;
		//printf("%d",ld);
		if(ld%2==0){
			printf("\nEven no.s are ");
			printf("%d ",ld);
			even_sum=even_sum+ld;
		}else{
			printf("\nOdd no.s are ");
			printf("%d ",ld);
			odd_sum=odd_sum+ld;
		}
		n=n/10;
	}
	printf("\nSum of even numbers: %d",even_sum);
	printf("\nSum of odd numbers: %d",odd_sum);
	printf("\nProduct of Even and Odd is %d",even_sum*odd_sum);
}