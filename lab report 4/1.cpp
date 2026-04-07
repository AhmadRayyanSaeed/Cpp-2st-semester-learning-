#include<iostream>
using namespace std;
class bank_acc{
	private:
	int acc_num;
	string acc_holder;
	double balance;
	public:
		void setacc(int anu){
			acc_num=anu;
		}
		void setachol(string hol){
			acc_holder=hol;
		}
		void setbal(int balc){
			if(balc>=0)
			balance=balc;
			else
			cout<<"Balance Can't Negative"<<endl;
		}
		int getacn(){
			return acc_num;
		}
		string gethol(){
			return acc_holder;
		}
		double getball(){
			return balance;
		}
};
int main(){
	bank_acc bkan;
	bkan.setacc(101);
	bkan.setachol("Mustafa");
	bkan.setbal(20000);
	bkan.setacc(325);
	bkan.setachol("Ghulam");
	bkan.setbal(-15000);
	cout<<"Bank Account Informatin "<<endl;
	cout<<"Account Number "<<bkan.getacn()<<endl;
	cout<<"Account Holder "<<bkan.gethol()<<endl;
	cout<<"Account Balance "<<bkan.getball()<<endl;
	return 0;
}
