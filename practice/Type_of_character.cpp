//To chech the type of character
#include<stdio.h>
int main(){
	int ch;
	printf("Enter character:\n");
	scanf("%c",&ch);
	if(ch>='A' && ch<='Z'){
		printf("Capital Letters\n");
	}else if(ch>='a'&&ch<='z'){
		printf("Small Letters\n");
	}else if(ch>='9'&&ch<='0'){
		printf("Numbers");
	}else if(ch==' '){
		printf("Space");
	}else{
		printf("Special Symbols");
	}
}