#include <iostream>
using namespace std;

bool isPrime(int number) 
{
    if (number <= 1) 
    {
        return false; 
    }
    for (int i = 2; i * i <= number; i++) 
    { 
        if (number % i == 0) {
            return false; 
        }
    }
    return true; 
}

int main() 
{
    int num;
    cout << "Enter number: ";
    cin >> num;

    if (isPrime(num)) 
    {
        cout << "number " << num << " is True." << endl;
    }
    else 
    {
        cout << "number " << num << " is False." << endl;
    }

    return 0;
}
