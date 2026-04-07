#include<iostream>
using namespace std;
class User_reg{
	private:
		string username;
		int age;
		string email;
		
		public:
			void setuser(string u){
				if(u.length()>=3)
				username =u;
				else
				cout<<"Please! enter the name less then 3 words"<<endl;
			}
			void setage(int a){
				if(a>=18)
				age=a;
				else
				cout<<"Not logged in "<<endl;
			}
			void setemail(string e){
				if(e.find("@") != string::npos)
             email = e;
        else
           cout<<"Invalid email format."<<endl;
			}
			
			string getnaem(){
				return username;
			}
			
			int getagg(){
				return age;
			}
			
			string getemail(){
				return email;
			}
};

int main(){
	User_reg usr;
	usr.setuser("Ali");
	usr.setage(18);
	usr.setemail("warngmail.com");
	
	usr.setuser("Sarim");
	usr.setage(10);
	usr.setemail("warngmail@543.com");
	
	cout<<"User Registration Age "<<usr.getagg()<<endl;
		cout<<"User Registration Name "<<usr.getnaem()<<endl;
			cout<<"User Registration  email "<<usr.getemail()<<endl;
	return 0;
}
