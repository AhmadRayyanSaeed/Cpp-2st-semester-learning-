// Create a class template Pair<t1,t2>, that stores two values of
// possibly different types and has a method display().

#include<iostream>
using namespace std;

template<class V1, class V2>
class Pair{
	private:
		V1  r1; 
		V2  e1;
	public:
	Pair(V1 c, V2 d){
		r1 = c;
		e1 = d; 
	}	
	void display(){
		cout<<" 1 :  "<<r1<<endl;
		cout<<" 2:   "<<e1<<endl;
		
		cout<<endl;
	}
};

int main(){
	Pair<float,string> ppp(22.6, " Jawad ");
	ppp.display();
	
	Pair<int , double> ppf(52, 8596245);
	ppf.display();
	return 0;
}


