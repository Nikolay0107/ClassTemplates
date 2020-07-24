#include <iostream>
using namespace std;

/*
С помощью ключевого слова Template создаем шаблон класса. 
Это нужно, чтобы класс мог работать с любыми типами данных.
*/

template<typename T>
class MyClass
{
public:
    MyClass(T value) // конструктор, в котором присваеваем принятую из main переменную value в текущую переменную value
    {
        this->value = value;
    }

    void DataTypeSize() // функция, которая будет сообщать размер переменной
    {
        cout << sizeof(value) << endl;
    }

private:
    T value;
};

int main()
{
    int a = 5; // создаем переменную "а", присваеваем ей значение "5"

    MyClass<int> c(a); // создаем объект класса MyClass, указываем в <int>, что он будет работать с типом данных int, так как он шаблонный, и передаем туда переменную "а"
    
    c.DataTypeSize(); // вызываем функцию DataTypeSize для объекта "c"

    return 0;
}

