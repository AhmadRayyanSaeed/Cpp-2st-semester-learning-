#include<iostream>
using namespace std;
class Complex{
	private :
		int real;
		int imag;	
	public:
	Complex operator +(Complex cmp){
		Complex temp;
		temp.real=real+cmp.real;
		temp.imag=imag+cmp.imag;
		return temp; 
	}	
	void getdata(){
		cout<<"Enter the Real"<<endl;
		cin>>real;
		cout<<"Enter the imagenery "<<endl;
		cin>>imag;
	}
	void display(){
		cout<<" Real Number  "<<real<<endl;
		cout<<" imaginary Number "<<imag<<"i"<<endl; 
	}
};
int main(){
	Complex cp1, cp2,cp3;
	cp1.getdata();
	cp2.getdata();
	cout<<"Complex with real and imaginary parts. "<<endl;
	cp3=cp1+cp2;
	cp3.display();
return 0;
}

//Task 1: Add Two Complex Numbers
//Create a class Complex with real and imaginary parts.
//? Overload + operator using member function
//? Display the result
