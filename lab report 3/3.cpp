#include<iostream>
using namespace std;
class Area{
	int length;
	int width;
	public:
		Area(){
			length = 10;
			width = 20;
		}
		Area(int lg){
			length = lg;
			 width = 20;
		}
		Area(int lg, int wd){
			length = lg ;
			width = wd ;
		}
		
		void display(){
			cout<<" Area of Rectangle "<<length * width<<endl;
		}
};
int main(){
	Area ar1;
	ar1.display();
	cout<<endl;
	cout<<"Perimeter that takes one values "<<endl;
	Area ar2(12);
	ar2.display();
	cout<<endl;
	cout<<"Perimeter that taked two values "<<endl;
	Area ar3(9,5);
	ar3.display();
	return 0;
}
