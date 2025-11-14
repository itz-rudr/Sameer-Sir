//To explain enum datatype
enum boolean{zero,one};
enum day{
	sun,mon,tue,wed,thru,fri,sat
};
#include<stdio.h>
int main(){
	boolean t,b;
	day c;
	c=wed;
	t=one;
	b=zero;
	printf("Value of t: %d\n",t);
	printf("Value of b: %d\n",b);
	printf("No. of day: %d\n",c);
}