// Write a class BankAccount where the interest rate is a 
// static variable. Show that changing the rate through one object updates it for all.

#include<iostream>
using namespace std;

class BankAccount{
	private:
		static float intrest;
	public:
	static void setRate(float r)
    {
        intrest = r;
    }	
	static void getdata_dis(){
		cout<<" UPDATE interest rate: "<<intrest<<" % "<<endl;
	}	
};
float BankAccount::intrest = 5.0;
int main(){
	BankAccount BKAC1;
	BankAccount BKAC2;
	BankAccount BKAC3;
	BankAccount BKAC4;
	BankAccount::getdata_dis();
	BKAC1.setRate(5.6);
	BankAccount::getdata_dis();
	BKAC2.setRate(99.3);
	BankAccount::getdata_dis();
	BKAC3.setRate(11.6);
	BankAccount::getdata_dis();
	BKAC4.setRate(2.53);
	BankAccount::getdata_dis();
	return 0;
}
