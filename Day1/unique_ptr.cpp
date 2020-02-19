#include <iostream>
#include <string>
#include <memory>

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

int main()
{
    unique_ptr<MyClass> uPtr2;
    {
        unique_ptr<MyClass> uPtr = make_unique<MyClass>("One");
        uPtr2 = move(uPtr);
    }
    cout << "After local scope" << endl;
    return 0;
}