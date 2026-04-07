#include<iostream>
using namespace std;
class Distance{
	int meter;
	int centimeter;
	public:
	void input();
	void display();
	friend Distance addingdis(Distance d1,Distance d2);
};
void Distance::input(){
	cin>>meter>>centimeter;
}
void Distance::display(){
	cout<<" Meter  "<<meter<<"m ";
	cout<<" Centimeter  "<<centimeter<<" cm"<<endl;
}
Distance addingdis(Distance d1,Distance d2){
	Distance result_d;
	result_d.meter = d1.meter + d2.meter;
	result_d.centimeter = d1.centimeter + d2.centimeter;
	if(result_d.centimeter >= 100){
	result_d.meter+=result_d.centimeter/100;
	result_d.centimeter=result_d.centimeter%100;
}
return result_d;
}
int main(){
	Distance dis1,dis2,dis3;
	dis1.input();
	dis2.input();
	dis1.display();
	dis2.display();
	dis3=addingdis(dis1,dis2);
	cout<<endl;
	cout<<" Final distance ";
	dis3.display();
	return 0;
}
