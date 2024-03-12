#include <bits/stdc++.h>
using namespace std;
int main() {
    string S,reverse;
    cout <<"Enter String: ";
    cin>>S;
    cout<<endl;
    for (int i = S.length() - 1; i >= 0; i--) {
        reverse += S[i];
    }
    cout<<"the reversed string is: "<<reverse;
    return 0;
} 
