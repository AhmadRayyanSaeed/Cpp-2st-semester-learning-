#include<iostream>
using namespace std;
class Student_Marks{
	private:
	string name;
	string subject;
	int marks;
	public:
		void setnam(string na){
			name=na;
		}
		void setsub(string sb){
			subject=sb;
		}
		void setmark(int mar){
			if(mar<=100 && mar >=0)
			marks=mar;
			else
			cout<<"You! entered Wrong "<<endl;
		}
		string getnam(){
			return name;
		}
		string getsub(){
			return  subject;
		}
		int getmarks(){
			return marks;
		}
};
int main(){
	Student_Marks struma;
	struma.setnam("Fawad");
	struma.setsub("Biology");
	struma.setmark(75);
	cout<<"student Name "<<struma.getnam()<<endl;
	cout<<"student subject "<<struma.getsub()<<endl;
	cout<<"student Marks "<<struma.getmarks()<<endl;
	return 0;
}
