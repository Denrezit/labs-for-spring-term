// На вход подаётся строка из целого числа, нужно сделать так, чтобы эта строка
// Отсортировалась по возрастанию цифр, если число меньше 1000.
// В другом случае в строке нужно будет найти цифру 5, если такая имеется.
// Затем выводится её первая позиция в строке,
// Если такой цифры нет, то выводится, что такой цифры в числе нет

#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>

int main()
{
    system("chcp 1251");
    std::string str_number;
    int integer_number;
    int sort_number;

    std::cout << "Введите любое целое число: ";
    std::cin >> str_number;

    integer_number = std::stoi(str_number);
    if (integer_number < 1000) {
        sort(str_number.begin(), str_number.end());
        sort_number = std::stoi(str_number);
        std::cout << sort_number + integer_number;
    }
    else {
        auto searching_num = std::find(str_number.begin(), str_number.end(), '5');
        if (searching_num != str_number.end()) { //Если искомый элемент не равен элементу, следующим за последним элементом
            std::cout << std::distance(str_number.begin(), searching_num); //Индекс элемента
        }
        else {
            std::cout << "Цифра 5 не найдена.";
        }
    }

}
