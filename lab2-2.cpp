//Lab_2.2, Iavnicov Dmitri, I2302


#include <cstring>
#include <stdlib.h>
#include <iostream>

// Объявить структуру TwoInts с двумя полями a и b типа int
struct TwoInts
{
    int a;
    int b;
};

//Объявить структуру StructWithArray c полем-массивом[4] arr типа int и полем-указателем someNumber типа int
struct StructWithArray
{
    int arr[4];
    int* someNumber;
};

int main()
{
    //Объявить перменную i2 типа TwoInts и инициализировать ее поля значением 0
    TwoInts i2 = { };
    //Присвоить полям i2.a и i2.b значения 5 и 7
    i2.a = 5;
    i2.b = 7;

    //Вывести на экран значения полей (i2.a = 5 i2.b = 7)
    std::cout << i2.a << std::endl;
    std::cout << i2.b << std::endl;

    //Объявить переменную s типа StructWithArray, и инициализировать ее поля значением 0
    StructWithArray s = { };
    //Полю arr[0] переменной s присвоить значение 10
    s.arr[0] = 10;

    //Объявить переменную s1 типа StructWithArray, и инициализировать ее поля значением 0
    StructWithArray s1 = { };
    //Полю arr[0] переменной s1 присвоить значение 15
    s1.arr[0] = 15;

    //Объявить указатель sPointer типа StructWithArray и инициализировать его адресом переменной s
    StructWithArray* sPointer = &s;
    //По адресу, содержащемуся в sPointer (s), найти поле arr[0] и присвоить ему значение 20
    sPointer->arr[0] = 20;

    //Вывести значение поля arr[0] переменной s (s.arr[0]=20)
    std::cout << s.arr[0] << std::endl;
    //Присвоить полю arr[0] переменной s значение 25
    s.arr[0] = 25;
    //Вывести значение поля arr[0] переменной s (s.arr[0]=25)
    std::cout << s.arr[0] << std::endl;
    //По адресу, содержащемуся в sPointer (s), найти поле arr[0] и присвоить ему значение 30
    sPointer->arr[0] = 30;
    //Вывести значение поля arr[0] переменной s (s.arr[0]=30)
    std::cout << s.arr[0] << std::endl;

    //Заменить текуще значение sPointer (адрес s) на адрес переменной s1
    sPointer = &s1;
    //По адресу sPointer (s1) найти поле arr[0] и присвоить ему значение 35
    sPointer->arr[0] = 35;
    //Вывод поля arr[0] структуры s (s.arr[0]=30)
    std::cout << s.arr[0] << std::endl;
    //Вывод значения поля arr[0] структуры s1 (s1.arr[0]=35)
    std::cout << s1.arr[0] << std::endl;

    //Объявить одномерный массив structArray типа StructWithArray с 2 элементами, и инициализировать все поля значением 0
    StructWithArray structArray[2] = { };
    //Полю arr[3] первого элемента массива structArray присвоить значение 77
    structArray[0].arr[3] = 77;
    //В поле someNumber второго элемента массива structArray записать адрес поля arr[3] первого элемента массива structArray
    structArray[1].someNumber = &structArray[0].arr[3];

    //Заменить текуще значение sPointer (адрес s1) на адрес переменной s
    sPointer = &s;
    //Объявить указатель pointer типа int, и инициализировать его адресом поля arr[3] переменной s
    int* pointer = &sPointer->arr[3];
    //Полю arr[3] переменной s присвоить значение 72
    s.arr[3] = 72;
    //Вывод значения поля arr[3] переменной s (s.arr[3]=72)
    std::cout << s.arr[3];

    //Объявить переменную memory типа  StructWithArray
    StructWithArray memory;
    //По адресу переменной memory, первые sizeof(StructWithArray) байты заполнить 0
    //Примечание: sizeof(StructWithArray) вернет значение 20 (4int x 4bytes + 1pointer x 8bytes), т.о. первые 20 байтов будут заполнены нулями
    //Примечание2: Т.к. 20 - это полный размер memory в байтах, то все его поля будут иметь значения 0
    //Примечание3: Т.к. memset() изменяет отдельно взятые байты, то применяя его к типам, которые занимают больше одного байта, необходимо быть внимательным
    //Пример: Допустим, что unsigned short int (2байта) x  = 65 535 (макс. знач. для unsigned short int). При помощи memset() первый байт x заполняем нулями
    //Пример: И так как, второй байт остался нетронутым, то значение x теперь 255, поскольку все биты второго байта остались единицами, а биты первого были заполнены нулями
    memset(&memory, 0, sizeof(StructWithArray));
    //Выход из функции с возвратом 0
    return 0;
}
