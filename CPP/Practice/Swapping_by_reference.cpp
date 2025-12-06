//To swap to numbers using reference variable
#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"Enter two numbers:"<<endl;
	cin>>a>>b;
	cout<<"Before Swapping"<<endl<<"a = "<<a<<endl<<"b = "<<b<<endl;
	swap(a,b);
	cout<<"After Swapping"<<endl<<"a = "<<a<<endl<<"b = "<<b<<endl;
}
void swap(int &p,int &q){
	int temp;
	temp=p;
	p=q;
	q=temp;
}