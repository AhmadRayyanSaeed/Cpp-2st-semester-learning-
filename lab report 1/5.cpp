#include<iostream>
using namespace std;
class Student{
  public:
	 int id;
	 string name;
	 int marks ;
	 
	 void display(){
	   cout<<"id: "<<id<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Marks: "<<marks<<endl;
	 }
};
int main(){
	Student stu{1, "Ahmad", 95};
	stu.display();
	return 0;
}
