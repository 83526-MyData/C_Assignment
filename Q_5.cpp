#include <iostream>
#include<string>
#include<cctype>
using namespace std;

int main() {
    string s;
    cout<<"enter string: "<<endl;
    cin>>s;
    int uppercase=0,lowercase=0,digit=0,other=0;
    for(int i=0;i<s.length();i++)
    {
        if(isupper(s[i]))
        {
            uppercase++;
        }
        else if(islower(s[i]))
        {
            lowercase++;
        }
        else if(isdigit(s[i]))
        {
            digit++;
        }
        else
        {
            other++;
        }
    }
    cout<<"Uppercase Characters: "<<uppercase<<endl;
    cout<<"Lowercase Characters: "<<lowercase<<endl;
    cout<<"Digits: "<<digit<<endl;
    cout<<"other: "<<other<<endl;
    return 0;
}
