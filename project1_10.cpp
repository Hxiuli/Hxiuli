#include <iostream>
using namespace std;
int main()
{
    int i;
    string a;
    getline(cin,a);
    string b;
    getline(cin,b);
    a+=b;
    cout<<a;
    return 0;
}