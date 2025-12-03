//To verify brand of car
#include<stdio.h>
enum car{
	Honda,Toyota,Fiat,Mercedes,BMW,Audi,Lamborghini,Maruti
};
int main(){
	enum car c;
	int choice;
	printf("Enter brand of car:\n");
	printf("0-Honda\n1-Toyota\n2-Fiat\n3-Mercedes\n4-BMW\n5-Audi\n6-Lamborghini\n7-Maruti\n");
	scanf("%d",&choice);
	if(choice<0||choice>7){
		printf("Invalid Choice.");
	}
	c=(enum car)choice;
	char *brand[]={"Honda","Toyota","Fiat","Mercedes","BMW","Audi","Lamborghini","Maruti"};
	printf("Selected Brand: %s",brand[c]);
}