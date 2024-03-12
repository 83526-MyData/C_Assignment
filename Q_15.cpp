#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
    string s;
    cout<<"enter string"<<endl;
    cin>>s;
    cout<<endl;
    int len=s.length();
    char unique[len];
    int counted=0;
    for(auto& x:s)
    {
    x=tolower(x);}
    
    
    for(int i=0;i<s.length();i++)
    {
        bool already_counted=false;
        for(int j=0;j<counted;j++)
        {
            if(s[i]==unique[j])
            {
                already_counted=true;
            }
        }
        if(already_counted) continue;
        int count=0;
        for(int j=0;j<s.length();j++)
        {
            
        
            if(s[i]==s[j])
            {
                count++;
            }
        }
        cout<<s[i]<<"="<<count<<endl;
                unique[counted]=s[i];
                counted++;
           
        }
    return 0;
}
