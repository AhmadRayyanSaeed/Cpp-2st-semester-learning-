//Hieracal
#include<iostream>
using namespace std;

class Staff {
	private:
		string name;
		int id;
public:
	void getdata(string n, int d){
		name=n;
		id=d;
	}
    void worker() {
    cout <<"Employee Detsils"<<endl;
    cout<<"name"<<name<<endl;
    cout<<"id"<<id<<endl;
    }
};

class CEO:public Staff {
public:
    void manage() {
    	worker();
        cout <<"Cheif exective officer"<< endl;
    }
};

class Algo:public Staff {
public:
    void code() {
    	worker();
        cout << "We are thinkier. " << endl;
    }
};

int main() {
  CEO c;
    c.getdata("GM",10);
    c.manage();

    Algo d;
    d.getdata("Jawad",2);
    d.code();
   
}


