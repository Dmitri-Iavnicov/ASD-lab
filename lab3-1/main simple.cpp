#include <iostream>

//Объявление функции hello типа int, принимающей параметр pm типа int
//Без определения получим ошибку, что ожидалась инициализация до int main()
int hello (int pm)
//Валидное тело функции hello, оно же определение функции hello
/*{
    return pm += pm;
}*/

int main()
{
    //Вызов функции hello с передачей значения 5 параметру pm
    int x = hello(5);
    //x = 10, после обработки функцией переданного значения параметра
    std::cout << x;
}
