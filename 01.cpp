#include <iostream>

#define MODE 1

#ifndef MODE
#error MODE not defined!
#endif

#if MODE == 1
short add(const short& a, const short& b);
#endif

int main(int argc, char** argv)
{
    std::system("chcp 1251");

#if MODE == 0
    std::cout << "Работаю в тестовом режиме" << std::endl;
#elif MODE == 1
    std::cout << "Работаю в боевом режиме" << std::endl;
#else
    std::cout << "Неизвестный режим. Завершение работы" << std::endl;
    std::system("pause");
    return 0;
#endif

    short a; short b;
    std::cout << "Введите число 1: ";
    std::cin >> a;
    std::cout << "Введите число 2: ";
    std::cin >> b;

#if MODE == 0
    std::cout << "Вы ввели число 1: " << a << " и число 2: " << b << std::endl;
#elif MODE == 1
    std::cout << "Результат сложения: " << add(a,b) << std::endl;
#endif
    std::system("pause");
    return 0;
}
#if MODE == 1
short add(const short& a, const short& b)
{
    return a + b;
}
#endif