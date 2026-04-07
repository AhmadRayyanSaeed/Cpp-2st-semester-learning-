#include<iostream>
using namespace std;
class Student{
	public:
	int roll_num=1;
	int marks=90 ;
};
int main(){
	Student stu;
	stu.roll_num = 10;
	stu.marks = 1000;
	cout<<"Updating Values"<<endl;
	cout<<"Student Roll Num "<<stu.roll_num<<endl;
	cout<<"Student Marks "<<stu.marks;
	return 0;
}
