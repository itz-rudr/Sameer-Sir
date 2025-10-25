//To print right triangle of alphabets
/*A
  B		C
  D		E	 F*/
#include<stdio.h>
int main(){
	int n,i,j;
	int temp=65;
	printf("Enter the no. of iterations:\n");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			printf("%4c",temp++);
		}
		printf("\n");
	}
}