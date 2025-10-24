//To check whether a alphabet is consonant or vowel
#include<stdio.h>
int main(){
	char alpha;
	printf("Enter a alphabet:\n");
	scanf("%c",&alpha);
	switch(alpha){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':printf("It is vowel");break;
		default: printf("It is consonent");
	}
}