#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char a1[100],a2[100],result,length;
	cout<<"Enter first String ";
	cin.getline(a1,100);
	cout<<"Enter second String ";
	cin.getline(a2,100);
	cout<<strcat(a1,a2)<<endl;
    result=strcmp(a1,a2);
    if(result == 0)
    cout<<"String are equal "<<endl;
    else if(result>0)
    cout<<"a1 is greather than a2 "<<endl;
    else
    cout<<"a2 is greather than a1 "<<endl;
    strcpy(a1,a2);
    cout<<a1; 
    length=strlen(a1);
    cout << "Strlen(s1): "<< strlen(a1);
	return 0;
}
