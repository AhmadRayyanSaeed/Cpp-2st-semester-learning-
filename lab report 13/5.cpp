// Simulate a static class Calculator with only static 
// methods for addition, subtraction, multiplication, and division.

#include<iostream>
using namespace std;

class Calculator{
	public:
		static int add(int a, int b){
			return a+b;
		}
		static int subtraction(int a, int b){
			return a - b;
		}
		static int multiply(int a, int b){
			return a * b;
		}
		static float divide(float a, float b){
			if(b == 0){
				cout<<"Not valid for divisible "<<endl;
				return 0;
			}
			else{
				return a/b;
			}
		}
};

int main(){
	cout<<" Addition : "<<Calculator::add(5,9)<<endl;
	cout<<" Substraction : "<<Calculator::subtraction(22,4)<<endl;
	cout<<" Multiply : "<<Calculator::multiply(7,6)<<endl;
	cout<<" Divide : "<<Calculator::divide(90,40)<<endl;
	
	return 0;
}
