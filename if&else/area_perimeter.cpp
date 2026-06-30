#include <iostream>
using namespace std;

int main()
{
    int length, breadth, area, perimeter;

    cout << "Enter the length: ";
    cin >> length;

    cout << "Enter the breadth: ";
    cin >> breadth;

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    if (area > perimeter)
    {
        cout << "Area is greater than Perimeter." << endl;
    }
    else
    {
        cout << "Area is not greater than Perimeter." << endl;
    }

    return 0;
}