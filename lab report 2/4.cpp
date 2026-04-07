#include<iostream>
using namespace std;
class Book{
	int bookID;
	float price;
	public:
		void input();
		void display();
		int getID();
};
void Book::input(){
	cin>>bookID>>price;
}
void Book::display(){
	cout<<"The Book ID is "<<bookID<<endl;
	cout<<"The Price is "<<price<<endl;
}
int Book::getID(){
	return bookID;
}
int main(){
	Book bko[6];
	int i;
	for(i=0;i<6;i++){
		cout<<"Book and Price "<<i+1<<endl;
		bko[i].input();
	}
	cout<<endl;
	for(i=0;i<6;i++){
		cout<<"Output of Book and Price"<<i+1<<endl;
		bko[i].display();
	}
	cout<<endl;
	int a;
	bool found = false;
	cout<<"Search the id"<<endl;
	cin>>a;
	for(i=0;i<6;i++){
		if(bko[i].getID() == a){
			cout << "Book Found!" << endl;
			bko[i].display();
			found=true;
		}
}
cout<<endl;
if(!found){
	cout<<"Book not found"<<endl;
}
return 0;
}
