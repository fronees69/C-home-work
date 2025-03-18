#include <iostream>
using namespace std;

bool isEven(int number)
{
    return number % 2 == 0;
}

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;

    if (isEven(num))
    {
        cout << "number " << num << " is True." << endl;
    } else {
        cout << "number " << num << " is False." << endl;
    }

    return 0;
}
