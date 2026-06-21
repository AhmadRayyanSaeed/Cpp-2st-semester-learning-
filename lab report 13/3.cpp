// 3. Implement a class Student with a static variable to track the 
// total number of Student objects created. Display the count using a static function.

#include<iostream>
using namespace std;

class Student{
	private:
		static int count;
	public:
	Student(){
		count ++;
	}	
	static void display_get(){
		cout<<" Total number of student object! "<<count<<endl;
	}
};

int Student::count = 0;

int main(){
	
	Student stu1;
	Student stu2;
	Student stu3;
	Student stu4;
	Student stu5;
	Student stu6;
	
	Student::display_get();	
	return 0;
}
