#include<iostream>
using namespace std;
struct StudentStruct{
	int id;
	string name;
	int marks ;
};

int main(){
StudentStruct stu_s;
stu_s.id = 10;
stu_s.name ="Umair";
stu_s.marks =80;
cout<<"Structure Student"<<endl;
cout<<"Student ID is "<<stu_s.id<<endl;
cout<<"Student name is "<<stu_s.name<<endl;
cout<<"Student marks is "<<stu_s.marks<<endl;

  class Student{
  public:
	 int id;
	 string name;
	 int marks ;
	 void display(){
	cout << "Using display function" << endl;
	cout<<"id: "<<id<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Marks: "<<marks<<endl;
	 }
};
	Student stu{1, "Ahmad", 95};
	stu.display();
	return 0;
}
