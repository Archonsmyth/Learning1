#include <iostream>

int main() {

    int drinkingAge = 21;

    int age;
    std::cout << "Please enter age: ";
    std::cin >> age;
    age >= drinkingAge ? std::cout << "You can drink!\n" : std::cout <<"You cannot drink!\n";

    double grade;
    std::cout << "Please enter your grade: ";
    std::cin >> grade;

    grade >= 70 ? std::cout << "You passed!!\n" : std::cout << "You failed!!\n";
  

    int number;
    std::cout << "Please enter number: ";
    std::cin >> number;

    number % 2 == 0 ? std::cout << "Number is even!\n" : std::cout << "Number is odd!\n";
    bool hungry = false;
    hungry == true ? std::cout << "You are hungry\n" : std::cout << "You are full\n";

  return 0;
}