#include<iostream>
using namespace std;
int main ()
{
int num, fact=1;
cout<<”enter number\n”;
cin>>num;
cout<<”\n”;
for(int i=1;i<=num;i++)
{
fact=fact * i;

}
cout<<”Factorial of the number is:\n ”;
cout<<fact;

}
