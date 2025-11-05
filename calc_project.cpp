#include <iostream>

int main() {
    using std::cout;
    char op;
    double num1;
    double num2;
    double result;
    cout << "**************Calculator Time*************" <<'\n';

    cout << "Enter desired operation ((+),(-),(*),(/): ";
    std::cin >> op;

    cout << "Enter number 1: ";
    std::cin >> num1;
    cout << "Enter number 2: ";
    std::cin >> num2;

    switch (op) {
        case '+':
            result = num1 + num2;
            cout <<"result: " << result << '\n';
            break;
        case '-':
            result = num1 - num2;
            cout <<"result: " << result << '\n';
            break;
        case '*':
            result = num1 * num2;
            cout <<"result: " << result << '\n';
            break;
        case '/':
            result = num1 / num2;
            cout <<"result: " << result << '\n';
            break;
        default:
        cout << "Please enter a valid operation type" << '\n';
    }
    cout << "******************************************";


    return 0;
}