#include<iostream>
using namespace std;
class Student{
  public:
	 int id;
	 string name;
	 int marks ;
};
int main(){
	Student stu[3];
	cout<<"Student Records by using loop"<<endl;
	for(int i=0;i<3;i++){
		cout<<"Student of "<<i+1<<endl;
		cin>>stu[i].id;
		cin>>stu[i].name;
		cin>>stu[i].marks;
	}
	for(int i=0;i<3;i++){
	cout<<"Student of "<<i+1<<endl;
	    cout<<"ID is  "<<stu[i].id<<endl;
		cout<<"Name is  "<<stu[i].name<<endl;
		cout<<"Marks is "<<stu[i].marks<<endl;
	}
	return 0;
}
