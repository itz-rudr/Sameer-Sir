//Structure within structure
struct company{
	char name[10];
	int code;
	struct branch{
		char bname[10];
		int bcode;
	}b;
}c;
#include<stdio.h>
int main(){
	printf("Enter Name and Company code:\n");
	scanf("%s%d",c.name,&c.code);
	printf("Enter branch name and code:\n");
	scanf("%s%d",c.b.bname,&c.b.bname);
	printf("Company Name: %s",c.name);
	printf("Company Code: %d",c.code);
	printf("Branch Name: %s",c.b.bname);
	printf("Branch Code: %d",c.b.bcode);
}