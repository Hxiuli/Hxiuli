#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int m,n,r,t,s,p;
    cin>>m>>n;
    if(m < n)
    {
        t=n;
        n=m;
        m=t;
    }
    r=m%n;
    s=m*n;
    while(r!=0)
    {
        m=n;
        n=r;
        r=m%n;
    }
    p=s/n;
    cout<<n<<setw(3)<<p<<endl;
    return 0;
}