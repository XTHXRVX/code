#include<iostream>
using namespace std;
void swap(int a, int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"\n\nThe values after swapping are:"<<"\na="<<a<<"\nb="<<b;
}
int main() 

{
    int a=0,b=0;
    cout<<"The two nos.:\n";
    cin>>a>>b;
    cout<<"\nThe values before swapping are:\n"<<"a="<<a<<"\nb="<<b;
    void swap(int a, int b);
    swap(a,b);
}
