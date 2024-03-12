#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
int main(int argc, char* argv[])
{
   int x=atoi(argv[1]);
    int pro;
    for(int i=1;i<=10;i++)
    {
pro=x*i;
cout<<x<<"*"<<i<<"="<<pro<<endl;
    }
}
