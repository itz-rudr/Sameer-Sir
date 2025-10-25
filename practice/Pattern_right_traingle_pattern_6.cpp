//To print right triangle of alphabets
/*A
  A		B
  A		B	 C*/
#include<stdio.h>
int main(){
	int n,i,j;
	printf("Enter the no. of iterations:\n");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		int temp=65;
		for(int j=1;j<=i;j++){
			printf("%4c",temp++);
		}
		printf("\n");
	}
}