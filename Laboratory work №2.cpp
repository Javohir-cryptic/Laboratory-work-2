#include <iostream>
#include <string>

int main()
{
    setlocale(LC_ALL, "Russian");
    std::cout << "Введите ваше полное имя: ";
    std::string myName;
    std::getline(std::cin, myName);

    std::cout << "Введите свой возраст: ";
    int myAge;
    std::cin >> myAge;

    int letters = myName.length(); 
    double agePerLetter = static_cast<double>(myAge) / letters; // используем оператор static_cast, чтобы изменить тип переменной myAge на double, дабы сохранить дробную часть при целочисленном делении
    std::cout << "Вы прожили " << agePerLetter << "  года на каждую букву вашего имени.\n";

    return 0;
}