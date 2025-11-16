//To explain union datatype and compare with structure
#include<stdio.h>
union boolean{
	int one;
	int two;
}a;
struct test{
	int one;
	int two;
}b;
int main(){
	printf("Size of Union: %d\n",sizeof(union boolean));
	printf("Size of Structure: %d\n",sizeof(struct test));
}