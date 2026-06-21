// Implement the Singleton pattern for a class Logger that
// writes log messages. Verify that only one instance is created.
 
#include <iostream>
#include <string>
using namespace std;

class Logger
{
private:
    static Logger* obj;
    Logger()
    {
        cout << "Logger created" << endl;
    }
public:
    static Logger* getInstance()
    {
        if (obj == NULL)
        {
            obj = new Logger();
        }
        return obj;
    }
    void log(string msg)
    {
        cout << "Log: " << msg << endl;
    }
};
Logger* Logger::obj = NULL;
int main()
{Logger* a = Logger::getInstance();
    Logger* b = Logger::getInstance();
    a->log("Hello world");
    if (a == b)
    {
        cout << "Same object (Singleton works)" << endl;
    }
    return 0;} 

