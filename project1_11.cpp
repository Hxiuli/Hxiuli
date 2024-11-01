#include <iostream>
using namespace std;
int main()
{
    int num[100];
    int  temp,i;
    int* p = num;
    int n=10;
    for(i = 0; i < n; i++)
       cin >> num[i];
    for(i = 0; i <int( n/ 2); i++)
    {
        temp = p[i];
        p[i] = p[n-1-i];
        p[n-1-i] = temp;
    }
     cout << "The array has been reverted" << endl;
     for(int i = 0; i < n; i++)
     {
       cout << num[i];
       cout << endl;
     }
    return 0;
}