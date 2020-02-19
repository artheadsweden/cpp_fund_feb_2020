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

void myfunc()
{
    MyClass mc3 = MyClass("Three");
}

int main()
{
    {
        MyClass mc1 = MyClass("One");
    }
    myfunc();
    MyClass mc2 = MyClass("Two");

    {
        MyClass *mcPtr = new MyClass("Four");
        delete mcPtr;
    }

    return 0;
}