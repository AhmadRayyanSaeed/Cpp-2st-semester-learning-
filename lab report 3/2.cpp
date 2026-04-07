#include<iostream>
using namespace std;
class Calculator{
	int num1;
	int num2;
	public:
	Calculator(){
		num1 = 25 ;
		num2 = 10 ;
	}
	void Addition(){
	cout<<"Addition of the two number is "<<num1+num2<<endl;}
	
	void Subtraction(){
	cout<<"Subtraction of the two number is "<<num1-num2<<endl;}
	
	void Multiplication(){
	cout<<"Multiplication of the two number is "<<num1*num2<<endl;}
	
	void Division(){
	if(num2!=0)cout<<"Yes! Its Divisible  "<<float(num1/num2);
	else cout<<"NOT! Divisible   ";}
};

int main(){
	Calculator cal;
	cout<<"Mathematic Operations Performed  "<<endl;
	cal.Addition();
	cal.Subtraction();
	cal.Multiplication();
	cal.Division();
	return 0;
}
