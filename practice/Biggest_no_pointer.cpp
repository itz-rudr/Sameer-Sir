//Program to find greatest number using pointer
#include<stdio.h>
int main(){
	int n;
	printf("Enter total terms:\n");
	scanf("%d",&n);
	int a[n],max,*p;
	printf("Enter %d numbers:\n",n);
	for(p=a;p<(a+n);p++){
		scanf("%d",p);
	}
	max=a[0];
	for(p=a;p<(a+n);p++){
		if(max<*p){
			max=*p;
		}
	}
	printf("Biggest number found is %d\n",max);
}