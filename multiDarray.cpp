#include<iostream>
using namespace std;
int main() 
{
int m,n,i,j,a[10][10];
cout<<"Enter the no of rows an columns: ";
cin>>m>>n;
for ( i = 0; i <m; i++)
{
    for ( j = 0; j<n; j++)
    {
        cout<<"Enter a value:";
        cin>>a[i][j];
    }
}
cout<<"The entered matrix:\n";
for ( i = 0; i <m; i++)
{
    for ( j = 0; j<n; j++)
    {
        cout<<a[i][j]<<"\t";
    }
    cout<<endl;
}
return 0;
}





