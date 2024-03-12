#include <iostream>
using namespace std;

// Function to convert decimal to binary
void decimalToBinary(int num) {
    int result=0;
    cout<<"The binary conversion is: ";
     for (int c = 31; c >= 0; c--)
  {
    result = num >> c;

    if (result & 1)
      printf("1");
    else
      printf("0");
  }

  printf("\n");

   
}

// Function to convert decimal to octal
void decimalToOctal(int num) {
    if (num > 0)
        decimalToOctal(num / 8);
    cout << num % 8;
}

// Function to convert decimal to hexadecimal
void decimalToHexadecimal(int num) {
    if (num > 0) {
        decimalToHexadecimal(num / 16);
        int remainder = num % 16;
        if (remainder < 10)
            cout << remainder;
        else
            cout << char('A' + remainder - 10);
    }
}

int main() {
    int num;
    cout << "Enter an integer number: ";
    cin >> num;

    decimalToBinary(num);
   
    cout << "Octal Conversion is: ";
    decimalToOctal(num);
    cout << endl;

    cout << "Hexadecimal Conversion is: ";
    decimalToHexadecimal(num);
    cout << endl;

    return 0;
}  
