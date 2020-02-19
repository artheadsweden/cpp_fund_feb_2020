#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int x = 10;
    int *xptr = &x;
    int **xptrptr = &xptr;
    int ***xptrptrptr = &xptrptr;

    cout << *xptr << endl;
    cout << **xptrptr << endl;
    cout << ***xptrptrptr << endl;

    vector<int *> v = {xptr};
    vector<int *> *vptr = &v;

    return 0;
}