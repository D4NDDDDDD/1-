//Напишите программу-календарь для мая. 
// Она должна проверять введённый номер дня и сообщать, выходной этот день или рабочий. 
#include <iostream>

int main()
{
    setlocale(LC_ALL, "Rus");

    int number;
    std::cout << "Введите число месяца с 1-го до 31-го: ";
    std::cin >> number;

    if ((number >= 1 && number <= 10) || (number == 13 || number == 14) || (number == 20 || number == 21) || (number == 27 || number == 28))
    {
        std::cout << number << "-е число выходной день.";
    }
    else if (number < 1 || number > 31)
    {
        std::cout << "Ошибка!";
    }
    else
    {
        std::cout << number << "-е число рабочий день.";
    }

}

