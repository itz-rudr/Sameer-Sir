//To check whether char is vowel or consonent
#include<stdio.h>
int main(){
	char ch;
	printf("Enter character: \n");
	scanf("%c",&ch);
	if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
		printf("It is vowel");
	}else{
		printf("It is consonent");
	}
}