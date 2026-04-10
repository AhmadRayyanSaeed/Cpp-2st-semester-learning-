#include<iostream>
using namespace std;
class Counter{
	private:
		int num1;	
	public:
	void getdata(){
		cout<<"Enter the number "<<endl;
		cin>>num1;
	}	
	Counter operator++(){
		Counter temp;
		  temp.num1= ++num1;
		return temp;}
	Counter operator++(int){
		Counter temp;
		  temp.num1= num1++;
		return temp;}
	void display(){
		cout<<"The Number is "<<num1<<endl;}
};
int main(){
	Counter cc1, cc2;
	cc1.getdata();
	cout<<"Before the increment "<<endl;
	cc1.display();
	cc2= ++cc1;
	cout<<"After the Pre-increment  "<<endl;
	cc2.display();
	cc2= cc1++;
	cout<<"After the Post-increment  "<<endl;
	cc2.display();	
	return 0;
}

//Task 4: Overload Increment Operator
//Create a class Counter.
//? Overload ++ operator
//? Show increment before and after

