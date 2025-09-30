//To Understand difference in Bitwise and Logical Operator
#include<stdio.h>
int main(){
	int i=3,j=4;
	//Using Logical and &&
	if(i++>j && j++>i){
		i=10;
		j=20;
	}
	printf("%d ",i);
	printf("%d\n",j);
	//Using Bitwise and 
	if(i++>j & j++>i){
		int i=10;
		int j=20;
	}
	printf("%d ",i);
	printf("%d\n",j);
	//Using Logical OR
	if(i++>j || j++>i){
		int i=10;
		int j=20;
	}
	printf("%d ",i);
	printf("%d\n",j);
	//Using Bitwise OR
	if(i++>j | j++>i){
		int i=10;
		int j=20;
	}
	printf("%d ",i);
	printf("%d\n",j);
}