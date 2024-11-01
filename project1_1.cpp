#include <iostream>
#include<iomanip>
using namespace std;

int main(void)
{
   const int arraySize = 9;
   int i,hold;
   int a[arraySize];
   for(i=0;i<9;i++)
   {
      cin>>a[i];
   }
   for(int pass =1;pass < arraySize;pass++)
          for(i = 0;i <= arraySize-1-pass;i++)
             if(a[i]>a[i+1])
             {
               hold=a[i];
               a[i]=a[i+1];
               a[i+1]=hold;
             }
   for(i = 0;i < arraySize; i++)
        cout<<setw(4)<<a[i];
   cout<<endl;
   return 0;
}