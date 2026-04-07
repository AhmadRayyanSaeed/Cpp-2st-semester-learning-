#include<iostream>
using namespace std;
class Vehicle{
	string brand;
	string model;
	int year;
	public:
	Vehicle(){
		brand = "Unknown" ;
		model = "Unknown" ;
		year =  0 ;
	}
	Vehicle(string bd, string md, int yr): Vehicle(){
		brand = bd ;
		model = md ;
		year = yr ;
	}
	void display(){
		cout<<"Vehicle Brand  "<<brand<<endl;
		cout<<"Vehicle Model  "<<model<<endl;
		cout<<"Vehicle Year  "<<year<<endl;
	}
};
int main(){
	Vehicle vh;
	cout<<"Default Constructor Output"<<endl;
	vh.display();
	
	Vehicle vh2("BMW", "X5", 2023);
	cout<<" Parameterized Constructor Output "<<endl;
    vh2.display();
	return 0;
}
