#include <iostream>
using namespace std;
int main()
{
    int i,j,N;
    cin>>N;
    for(i=2;i<=N;i++)
    {
        for(j=2;j<i;j++)
        if(i%j==0)  break;
      if(j>=i)
      {
        cout<<i<<endl;
      }
    }
    return 0;
}