#include <iostream>
using namespace std;
int main() {
    string S;
    cout << "Enter String: ";
    cin>>S;
    string P = S;
    reverse(P.begin(), P.end());
    if (S == P) {
        cout<<"Yes it is palindrome";
    } else {
        cout<< "No";
    }
    return 0
}