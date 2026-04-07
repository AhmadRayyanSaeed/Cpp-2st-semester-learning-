#include<iostream>
using namespace std;
class BankAccount{
	private :
	int acc_no;
	double balance;
	public:
	static int totalAccounts;
	void createAccount();
	void deposit(double amount);
	void display();
	double getBalance();
};
int BankAccount::totalAccounts = 0;
void BankAccount::createAccount(){
	cout<<"Enter Account Number & Balance";
	cin>>acc_no>>balance;
	 totalAccounts++;
} 
void BankAccount::deposit(double amount){
	balance += amount;
}
void BankAccount::display(){
	cout<<"Account Holder Num "<<acc_no<<endl;
	cout<<"Balance Amount"<<balance<<endl;
}
double BankAccount::getBalance() {
    return balance;  
}
int main(){
	int i;
	BankAccount ak_acc[3];
	for( i=0;i<3;i++){
		cout<<" Creating account "<< i + 1<<endl;
	ak_acc[i].createAccount();
	}	
for( i=0;i<3;i++){
	double dpo;
	cout<<"Enter deposit amount for account"<<i+1<<endl;
    cin >> dpo;
ak_acc[i].deposit(dpo);
}
int max=0;
	for( i=0;i<3;i++){
		if(ak_acc[i].getBalance() > ak_acc[max].getBalance()){
		max=i;
	}
}
cout<<"Highest Balance"<<endl;
	ak_acc[max].display();
	cout<<"Total Accounts Created: "<<BankAccount::totalAccounts<<endl;
return 0;
}
