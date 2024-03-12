#include <iostream>
using namespace std;

int main() {
    int n, a = 0, b = 1, c = 0;

    cout << "Enter the number:\n";
    cin >> n;

    cout << "The Fibonacci Series is: ";

    for (int i = 1; i <= n; i++) {
        
        if(i == 1) {
            cout << a<< "\n";
            continue;
        }
        if(i == 2) {
            cout << b << "\n";
            continue;
        }
        c =a+b;
        a = b;
        b = c;
        
        cout << c << "\n";
    }
    return 0;
}
