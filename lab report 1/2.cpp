#include<iostream>
using namespace std;
class Student{
	public:
	int roll_num;
	int marks;
};
int main(){
	Student stu {4, 804};
	cout<<"Student Roll Num "<<stu.roll_num<<endl;
	cout<<"Student Marks "<<stu.marks;
	return 0;
}
