#include <iostream>
#include <cmath>
#include <stdexcept>

#define TRY try {
#define CATCH } catch (const std::exception& e) { \
    std::cerr << "Ошибка: " << e.what() << std::endl; }


void division(int num1, int num2) {
    if (num2 == 0) {
        throw std::runtime_error("Делить на ноль нельзя");
    }
    else {
        std::cout << "Деление первого числа на второе равно: " << num1 / num2 << std::endl;
    }
}

void negative_num(int num) {
    if (num <= 0) {
        throw std::runtime_error("Число не натуральное");
    }
    else {
        std::cout <<"Корень из числа равен: " << sqrt(num) << std::endl;
    }
}

int main()
{
    system("chcp 1251");
    int first_number = 10;
    int second_number = 0;
    int num = -49;
    TRY
        division(first_number, second_number);
    CATCH

    TRY
        negative_num(num);
    CATCH

    return 0;
}
