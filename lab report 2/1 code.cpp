#include<iostream>
using namespace std;
class Student{
	int roll_no;
	int marks;
	public:
	void input();
	void display();
	int getMarks();
};
void Student::input(){	
	cin>>roll_no>>marks;
}
void Student::display(){
	cout<<"Student roll number "<<roll_no<<endl;
	cout<<"Student marks "<<marks<<endl;}
int Student::getMarks(){
	 return marks;}
int main(){
	int i;
	Student st[5];
	for( i=0;i<5;i++)
	st[i].input();
	for(i=0;i<5;i++)
	st[i].display();
int max=0;
	for( i=0;i<5;i++){
		if(st[i].getMarks() > st[max].getMarks()){
		max=i;}
}
cout<<endl;
cout<<"Highest Marks of the student"<<endl;
	st[max].display();
return 0;
}
