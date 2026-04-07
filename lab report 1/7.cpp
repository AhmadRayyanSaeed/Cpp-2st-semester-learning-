#include<iostream>
using namespace std;
class Student{
	public:
	int id ;
	string name;
	int marks;
};
int main(){
	Student stu1{2,"Usman",455},stu2{3,"Sarim",480},stu3{4,"Umair",490};
	cout << "Student 1:  "<<stu1.id<<" "<<stu1.name<<" "<< stu1.marks <<endl;
    cout << "Student 2:  "<<stu2.id<<" "<<stu2.name<<" "<< stu2.marks <<endl;
    cout << "Student 3:  "<<stu3.id<<" "<<stu3.name<<" "<< stu3.marks <<endl;
	return 0;
}
