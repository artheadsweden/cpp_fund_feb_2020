#include <iostream>

using namespace std;

int main()
{
    int x = 10;
    int &y = x;
    x++;
    cout << y << endl;
    int *xptr = &x;
    cout << *xptr << endl;
    return 0;
}