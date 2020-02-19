#include <iostream>
#include <string>
using namespace std;

class MyClass
{
public:
    MyClass(string n) : name(n)
    {
        cout << "Constructing " << name << endl;
    }

    ~MyClass()
    {
        cout << "Destructing " << name << endl;
    }

private:
    string name;
};

void myfunc(int &&value)
{
    cout << "Rvalue function" << endl;
}

void myfunc(int &value)
{
    cout << "Lvalue function" << endl;
}

int main()
{
    int x = 10;
    myfunc(x);
    //myfunc(20);

    return 0;
}