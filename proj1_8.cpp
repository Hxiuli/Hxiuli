#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int i,x,hold;
    int a[10]={0};
    for(i=1;i<10;i++)
    cin>>a[i];
    cin>>x;
    a[0]=x;
    for(int pass =1;pass < 10;pass++)
          for(i = 0;i <= 9-pass;i++)
             if(a[i]>a[i+1])
             {
               hold=a[i];
               a[i]=a[i+1];
               a[i+1]=hold;
             }
   for(i = 0;i < 10; i++)
        cout<<a[i]<<endl;
   cout<<endl;
}