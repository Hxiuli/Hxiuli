#include <iostream>
using namespace std;
int main()
{
    int i,s,a,b,c;
    for(i=100;i < 1000;i++)
    {
     a=i/100;
     b=i/10%10;
     c=i%10;
     s=a*a*a+b*b*b+c*c*c;
     if(s==i)  cout<<i<<endl;
    }
    return 0;
}