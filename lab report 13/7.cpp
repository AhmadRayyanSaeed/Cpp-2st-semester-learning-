// Combine templates and static members: write a template class Counter<T>
// that counts how many objects of each instantiated type have been created.
#include <iostream>
using namespace std;

template <class T>
class Counter
{
private:
    static int count;
public:
    Counter()
    {
        count++;
    }
    static void getdata_Show()
    {
        cout << "Objects created: " << count << endl;
    }
};
template <class T>
int Counter<T>::count = 0;
int main()
{
    Counter<int> cc1;
    Counter<int> cc2;
    Counter<int> cc3;
    Counter<int> cc4;
    Counter<float>cc5;
    Counter<float>cc6;
    Counter<string> cc7;
    Counter<string> cc8;
    Counter<string> cc9;
    cout<<" Int counter: ";
    Counter<int>::getdata_Show();
    cout<<" Float counter: ";
    Counter<float>::getdata_Show();
    cout<<" String counter: ";
    Counter<string>::getdata_Show();
    return 0;
}

