#include<iostream>
using namespace std;
class Multiply{
	private:
		int n1;
		int n2;
	
	public:
		void getdata(){
		cout<<"Enter the n1"<<endl;
		cin>>n1;
		cout<<"Enter the n2 "<<endl;
		cin>>n2;
	}
	void display(){
		
		cout<<"Result is "<<n1<<" , "<<n2<<endl;
	}	
	friend Multiply operator * (Multiply mlt1, Multiply mlt2);
};
Multiply operator * (Multiply mlt1, Multiply mlt2){
	Multiply temp;
	temp.n1=mlt1.n1 * mlt2.n1;
	temp.n2=mlt1.n2 * mlt2.n2;
	return temp;
}
int main(){
	Multiply mp1,mp2,mp3;
	mp1.getdata();
	mp2.getdata();
	mp3=mp1*mp2;
	cout<<" Multiplay the number is  "<<endl;
	mp3.display();
	return 0;
}

//Task 3: Multiply Two Objects using Friend Function
//Create a class Multiply.
//? Overload * operator using friend function
//? Display result

