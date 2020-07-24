#include <iostream>
using namespace std;

/*
Создаем класс Point, чтобы объект этого класса можно было передать как тип данных в шаблон
*/

class Point
{
public:
    Point()
    {
        x = y = z = 0;
    }
    Point(int x, int y, int z)
    {
        this->x = x;
        this->y = y;
        this->z = z;
    }
    int x;
    int y;
    int z;
};

/*
С помощью ключевого слова Template создаем шаблон класса.
Это нужно, чтобы класс мог работать с любыми типами данных.
*/

template<typename T1, typename T2>
class MyClass
{
public:
    MyClass(T1 value, T2 value_2) // конструктор, в котором присваеваем принятую из main переменную value в текущую переменную value
    {
        this->value = value;
        this->value_2 = value_2;
    }

    void DataTypeSize() // функция, которая будет сообщать размер переменной
    {
        cout<< "Value " << sizeof(value) << endl;
        cout << "Value_2 " << sizeof(value_2) << endl;

    }

private:
    T1 value;
    T2 value_2;
};

int main()
{
    int a = 5; // создаем переменную "а", присваеваем ей значение "5"
    Point r; // создаем объект r типа Point

    MyClass<int, Point> c(a, r); // создаем объект класса MyClass, указываем в <int>, что он будет работать с типом данных int, так как он шаблонный, и передаем туда переменную "а"
    
    c.DataTypeSize(); // вызываем функцию DataTypeSize для объекта "c"

    return 0;
}

