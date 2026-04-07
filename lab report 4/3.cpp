#include<iostream>
using namespace std;
class Book{
	private:
		string title;
		string author;
		string isbn;
		public:
		Book(string t, string a, string i) {
        title = t;
        author = a;
        isbn = i;
    }
			string gettitle(){
			return title;
			}
			string getathu(){
				return author;
			}
			string getisbn(){
			 return	isbn;
			} 	 
};
int main(){
	Book bok1("The Power of Focus", "Jack Canfield", "978-0000000001");
    Book bok2("Think and Grow Rich", "Napoleon Hill", "978-0000000002");
    Book bok3("Atomic Habits", "James Clear", "978-0000000003");
    cout<<" Book 1  Title "<<bok1.gettitle()<<endl;
    cout<<" Book 1  Author "<<bok1.getathu()<<endl;
    cout<<" Book 1  ISBN "<<bok1.getisbn()<<endl;
    cout<<endl;
    cout<<" Book 2  Title "<<bok2.gettitle()<<endl;
    cout<<" Book 2  Author "<<bok2.getathu()<<endl;
    cout<<" Book 2  ISBN "<<bok2.getisbn()<<endl;
    cout<<endl;
    cout<<" Book 3  Title "<<bok3.gettitle()<<endl;
    cout<<" Book 3  Author "<<bok3.getathu()<<endl;
    cout<<" Book 3  ISBN "<<bok3.getisbn()<<endl;
	return 0;
}
