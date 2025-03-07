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

    integer_number = std::stoi(str_number); // Преобразование в целочисленный тип
    if (integer_number < 1000) {
        sort(str_number.begin(), str_number.end()); // Сортировка по возрастанию
        sort_number = std::stoi(str_number);
        std::cout << sort_number + integer_number; // Сумма отсортированного числа и изначального числа
    }
    else {
        auto searching_num = std::find(str_number.begin(), str_number.end(), '5'); // Поиск цифры 5 в строке
        if (searching_num != str_number.end()) { // Если искомый элемент не равен элементу, следующим за последним элементом
            std::cout << "Позиция цифры 5: " << std::distance(str_number.begin(), searching_num); // Индекс элемента
        }
        else {
            std::cout << "Цифра 5 не найдена.";
        }
    }
    return 0;
}

