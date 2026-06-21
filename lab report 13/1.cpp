// Write a function template swap() that swaps two variables of any type.
// Test with int, double, and string.

#include<iostream>
#include<string>
using namespace std;

template<class RR>
void swappp(RR &a, RR &b)
{
    RR temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 18, y = 52;
    double c = 155520, d = 855436;
    string o = "Shani", r = "Mani";

    swappp(x, y);
    cout<<" INT swap numbers is : "<<x<<" "<<y<<endl;

    swappp(c, d);
    cout<<" Double swap numbers is : "<<c<<" "<<d<<endl;

    swappp(o, r);
    cout<<" String swap numbers is : "<<o<<" "<<r<<endl;

    return 0;
}
