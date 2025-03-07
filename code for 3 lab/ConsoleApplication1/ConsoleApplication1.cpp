#include <iostream>
#include <string>;
using namespace std;

int main()
{
    system("chcp 1251");
    string str_numbers;
    int addition = 0;
    int second_number;
    cout << "Введите строку, содержащую числовое значение: ";
    cin >> str_numbers;
    int integer_numbers = stoi(str_numbers);
    cout << "Введите второе число для сложения: ";
    cin >> second_number;
    addition = integer_numbers + second_number;
    cout << "Сумма чисел: " << addition;
}
