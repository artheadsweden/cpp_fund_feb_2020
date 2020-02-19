#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name = "Anna";
    string name2 = move(name);

    cout << "!" << name << "!" << endl;
    cout << "!" << name2 << "!" << endl;
    return 0;
}