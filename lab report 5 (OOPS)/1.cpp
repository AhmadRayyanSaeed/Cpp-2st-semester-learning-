#include<iostream>
using namespace std;
class Number{
	private :
		int num1;
		int num2;
		
	public:
	Number operator -(Number sub){
		Number temp;
		temp.num1=num1-sub.num1;
		temp.num2=num2-sub.num2;
		return temp; 
	}	
	void getdata(){
		cout<<"Enter the num1"<<endl;
		cin>>num1;
		cout<<"Enter the num2 "<<endl;
		cin>>num2;
	}
	void display(){
		cout<<" Num1  "<<num1<<endl;
		cout<<"NUm2 "<<num2<<endl; 
	}
	
};
int main(){
	Number n1, n2,subtract;
	n1.getdata();
	n2.getdata();
	cout<<"The subtraction value is "<<endl;
	subtract=n1-n2;
	subtract.display();
return 0;
}
//Task 2: Subtract Two Numbers
//Create a class Number.
//? Overload - operator
//? Perform subtraction of two objects
