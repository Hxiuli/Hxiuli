#include <iostream>
using namespace std;
int main()
{
    const int M=3;
    const int N=3;
    int a[M][N];
    int b[M][N];
    for(int i=0; i<M; i++)
    {
       for(int j=0; j<N; j++)
       {
       cin >> a[i][j];
       b[j][i] = a[i][j];
       }
    }
    cout<<endl;
    for(int i=0; i<N; i++)
    {
       for(int j=0;j <M; j++)
       {
        cout<<b[i][j]<<" ";
       }
     cout<<endl;
    }
    return 0;
}