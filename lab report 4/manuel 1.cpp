#include<iostream>
using namespace std;
class student{
	private:
	 int rol_num;
	 string name;
	 string course;
	public:
	void setrlnum(int rl_num){
		rol_num=rl_num;
	}
	void setName(string na){
		name= na;
	}
	void setcourse(string cors){
		course= cors;
	}
	int setrlnum(){
		return rol_num;
	}
	string setname(){
		return name;
	}
	string setcoure(){
		return course;
	}
};

int main(){
	student stu;
	stu.setrlnum(101);
	stu.setName("Sarim");
	stu.setcourse("Software Enginerring");
	cout<<"The student Information "<<stu.setrlnum()<<"  "<<stu.setname()<<"  "<<stu.setcoure()<<endl;
	return 0;
	
}
