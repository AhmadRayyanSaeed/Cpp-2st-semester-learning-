#include<iostream>
using namespace std;
class User{
	private:
		int password;
		public:
			void setpas(int pa){
				password=pa;
				cout<<"Password ! is  Created "<<endl;
			}
};
int main(){
	User us;
	us.setpas(982536);
	cout<<"Not Allow to read my password! "<<endl;
	return 0;
}
