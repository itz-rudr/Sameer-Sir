//To print reverse of a string
#include<stdio.h>
#include<string.h>
int main(){
	char a[20];
	printf("Enter string: ");
	scanf("%s",a);
	int l=strlen(a);
	for(int i=l-i;i>=0;i--){
		printf("%c\n",a[i]);
	}
}