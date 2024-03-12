#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
int main(int argc, char* argv[])
{
    int a,b,x;
    cout<<argv[2]<<"\n";
    for(int i=1;i<argc-1;i++)
    {
        a=atoi(argv[i]);
        b=atoi(argv[i+1]);
        if(a>b)
        {
            x=a;
        }
        else if(a<b)
        {
            x=b;
        }
        else
        {
            x=a;
        }
        
        
    }
    cout<<x;
    
}
