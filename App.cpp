#include <iostream>
using namespace std;
int main()
{
    string operation;
    double num1, num2;
    cin >> operation >> num1 >> num2;
    if (operation == "+")
    {
        cout << num1 + num2;
    }
    if (operation == "-")
    {
        cout << num1 - num2;
    }
    if (operation == "*")
    {
        cout << num1 * num2;
    }
    if (operation == "/")
    {
        cout << num1 / num2;
    }
}