#include<iostream>
using namespace std;
class Student{
	string name;
	int roll_num;
	public:
		Student(string n, int rl_num){
			name= n ;
			roll_num = rl_num ;
		}
	Student(const Student &s){
		name = s.name ;
		roll_num = s.roll_num;
	}
	void display(){
		cout<<" --  Student Card -- "<<endl;
		cout<<" Name "<<name<<endl;
		cout<<" Roll_num "<<roll_num<<endl;
	}	
};
int main(){
	Student stu1("Sarim",85);
	cout<<"Student one Details "<<endl;
	stu1.display();
	Student stu2 = stu1;
	cout<<"Student Copying  "<<endl;
	stu2.display();
	return 0;
}
