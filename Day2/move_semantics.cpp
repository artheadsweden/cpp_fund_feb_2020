#include <iostream>
#include <vector>
using namespace std;

class MyClass
{
public:
    MyClass()
    {
        cout << "Defualt constructor" << endl;
    }
    MyClass(const MyClass &other)
    {
        cout << "Copy constructor" << endl;
    }
    MyClass(MyClass &&other)
    {
        cout << "Move constructor" << endl;
    }
    ~MyClass()
    {
        cout << "Destructor" << endl;
    }
    MyClass &operator=(const MyClass &other)
    {
        cout << "Copy assignmnet operator" << endl;
    }
    MyClass &operator=(MyClass &&other)
    {
        cout << "Move assignmnet operator" << endl;
    }
};

int main()
{
    vector<MyClass> v;
    for (auto i = 0; i < 100; i++)
    {
        MyClass obj;
        v.push_back(obj);
    }

    return 0;
}