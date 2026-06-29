#include <iostream>
using namespace std;

int main() {
    cout << "ASCII Value\tCharacter" << endl;
    cout << "------------------------" << endl;

    for (int i = 32; i <= 126; i++) {
        cout << i << "\t\t" << (char)i << endl;
    }

    return 0;
}