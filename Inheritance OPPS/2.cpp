//Multiple
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
	void displays(){
		cout<<"name "<<name<<endl;
		cout<<"age  "<<age<<endl;
	}
};

class Shopkeeper{
	private:
		string items;
		float prices;
	public:
	void getdata(string it, int pr){
		items=it;
		prices=pr;
	}	
	void display(){
		cout<<"Items "<<items<<endl;
		cout<<"Prices  "<<prices<<endl;
	}
};



class Employee:public Admin, public Shopkeeper{
	private:
		int id;
		string work;
	public:
	void data(int i,string wk){
		id= i;
		work=wk;
	}
	void show(){
		displays();
		display();
		cout<<"id "<<id<<endl;
		cout<<"wk "<<work<<endl;
	}	
	
};

int main(){
	Employee m;
	m.setdata("Arham",20);
	m.getdata("Rice",300);
	m.data(2,"CO");
	m.show();
	
}


