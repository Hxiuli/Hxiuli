#include <iostream>
using namespace std;

int main()
{
    int i,j,n,sum=0,t=1;
    cin>>n;
    for(i = 1;i <= n;i++)
    {
       t=i*t; 
       sum=sum+t;
    }
    cout<<sum<<endl;
    return 0;
}
