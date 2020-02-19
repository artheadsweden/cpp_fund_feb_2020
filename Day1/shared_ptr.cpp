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
    auto sPtr = make_shared<MyClass>("One");
    auto sPtr2 = sPtr;
    auto iPtr = make_shared<int>(10);
    cout << *iPtr << endl;
    int x = 11;
    return 0;
}