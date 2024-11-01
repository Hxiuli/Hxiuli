#include <iostream>
using namespace std;
 
int main()
{
    int x,y;
    cin>>x;
    y = x/10;
        switch(y)
        {
            case 10:
            case 9:cout<<"A"<<endl;break;
            case 8:cout<<"B"<<endl;break;
            case 7:cout<<"C"<<endl;break;
            case 6:cout<<"D"<<endl;break;
            default:cout<<"E"<<endl;break;
        }
}
