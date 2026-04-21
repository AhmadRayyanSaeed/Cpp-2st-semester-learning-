//Multilevel
#include<iostream>
using namespace std;

class Vehicle {
	private:
		string name; 
		double price;
public:
	void data(string ne, double pr){
		name=ne;
		price =pr;
	}
    void start() {
        cout <<"name"<<name<< endl;
        cout<<"price"<<price<<endl;
    }
};

class Car:public Vehicle {
public:
    void drive() {
    	start();
        cout << "Car driving" << endl;
    }
};

class SportsCar:public Car {
public:
    void speed() {
    	start();
        cout<<"Sports car very fast" << endl;
    }
};

class designCar:public SportsCar {
public:
    void com(){
    	start();
        cout<<"customize" << endl;
    }
};

int main() {
	Car c;
	c.data("Swift",250000);
	c.drive();
	
	SportsCar spc;
	spc.data("Honda", 450000);
	spc.speed();
	
	
	designCar dgc;
	dgc.data("Every",120000);
	dgc.com();
    
}


