#include <iostream>

using namespace std;

void myFunc(int *array_ptr)
{
    (*array_ptr)++;
    cout << *array_ptr << endl;
}

int main()
{
    int values[] = {2, 22, 3, 4};

    myFunc(values);
    return 0;
}