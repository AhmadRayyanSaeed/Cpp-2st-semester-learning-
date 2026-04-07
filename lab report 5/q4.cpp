#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char a1[100],a2[100];
	int len1,len2;
	cout<<"Enter first  String ";
	cin.getline(a1,100);
	cout<<"Enter second String ";
	cin.getline(a2,100);
    len1=strlen(a1);
    len2=strlen(a2);
    if(len1==len2)
    cout<<"The Length of a1 is equal"<<endl;
    else
    cout<<"The Length of a2 is not  equal";

	return 0;
}
