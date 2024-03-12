#include <iostream>
#include <cstring>
using namespace std;

int main() {
    const char* strings[] = {"bike", "car", "bike", "boat", "train"};
    const int size = sizeof(strings) / sizeof(strings[0]);

    for (int i = 0; i < size; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (strcmp(strings[i], strings[j]) == 0 && i != j) {
                cout << "Duplicate string: " << strings[i] << std::endl;
                break;
            }
        }
    }

    return 0;
}
