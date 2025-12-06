//To input multiple student records
//To input and print record of one student using class and object
#include<iostream>
using namespace std;
class student{
	private: char a[10];
			 int roll_no;
	public: 
		void get(){
			cout<<"Enter name and roll no."<<endl;
			cin>>a>>roll_no;
		}
		void out(){
			cout<<"Name: "<<a<<endl;
			cout<<"Roll: "<<roll_no<<endl;
		}
};
int main(){
	int n;
	cout<<"Enter number of record: ";
	cin>>n;
	student rec[n];
	for(int i=0;i<n;i++){
		rec[i].get();
	}
		for(int i=0;i<n;i++){
		rec[i].out();
	}
}