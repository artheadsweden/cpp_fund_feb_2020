#include <iostream>

using namespace std;

class MyClass
{
public:
    // Default construcotr
    MyClass() : value(nullptr) {}
    // Construcotr that takes an int
    MyClass(int v) : value(new int(v)) {}
    // Copy constructor
    MyClass(const MyClass &other) : value(new int(*other.value)) {}
    // Move constructor
    MyClass(MyClass &&other) : value(nullptr)
    {
        swap(value, other.value);
    }
    // Destructor
    ~MyClass()
    {
        if (value)
        {
            delete value;
        }
    }
    // Copy assignment operator
    MyClass &operator=(const MyClass &other)
    {
        if (value)
        {
            delete value;
        }
        value = new int(*other.value);
        return *this;
    }
    // Move assgment operator
    MyClass &operator=(MyClass &&other)
    {
        if (value)
        {
            delete value;
        }
        value = nullptr;
        swap(value, other.value);
        return *this;
    }

    void print()
    {
        if (value)
        {
            cout << *value << endl;
        }
        else
        {
            cout << "null" << endl;
        }
    }

private:
    int *value;
};

int main()
{
    // Default Constructor
    MyClass a;
    a.print();
    // Constructor that takes an int
    MyClass b(10);
    b.print();
    // Copy constructor
    MyClass c = b;
    c.print();
    // Default constructor
    MyClass d;
    // Copy assignment operator
    d = c;
    d.print();
    // Move constructor
    MyClass e = move(d);
    d.print();
    e.print();
    // Default constructor
    MyClass f;
    // Move assignment operator
    f = move(e);
    e.print();
    f.print();
    return 0;
}