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


//класс предок
template<typename T1>
class TypeSize
{
public:
    TypeSize(T1 value):TypeInfo<T>(value)
    {
        this->value = value;
    }
    void DataTypeSize()
    {
        cout << "value: " << sizeof(value) << endl;
    }

protected:
    T1 value;
};





// класс потомок
template<typename T1>
class TypeInfo : public TypeSize<T1>
{
public:
    TypeInfo(T1 value):TypeSize<T1>(value)
    {

    }

    void ShowTypeName()
    {
        cout << "Название типа: " << typeid(TypeSize<T1>::value).name() << endl;
    }
};










int main()
{

    setlocale(LC_ALL, "ru");

    double a = 2; // создаем объект r типа Point

    TypeSize<double> c(a);

   
    c.DataTypeSize(); // вызываем функцию DataTypeSize для объекта "c"
    return 0;
}