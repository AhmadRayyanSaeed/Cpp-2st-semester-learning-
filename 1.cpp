//Inheretence
#include<iostream>
using namespace std;

class Admin{
	private:
		string name;
		int age;
	public:
	void setdata(string na, int a){
		name=na;
		age=a;
	}	
	void display(){
		cout<<"name "<<name<<endl;
		cout<<"age  "<<age<<endl;
	}
};

class Employee:public Admin{
	private:
		int id;
		string work;
	public:
	void data(int i,string wk){
		id= i;
		work=wk;
	}
	void getdata(){
		display();
		cout<<"id "<<id<<endl;
		cout<<"wk "<<work<<endl;
	}	
	
};

int main(){
	Employee emp;
	emp.setdata("Hani",5);
	emp.data(10,"DEveloper");
		emp.getdata();
}
