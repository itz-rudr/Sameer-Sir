//To print string into single character
#include<stdio.h>
#include<string.h>
int main(){
	char a[20];
	printf("Enter name: ");
	scanf("%s",a);
	int l=strlen(a);
	for(int i=0;i<l;i++){
		printf("%c\n",a[i]);
	}
}