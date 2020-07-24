#include <iostream>
using namespace std;

/*
������� ����� Point, ����� ������ ����� ������ ����� ���� �������� ��� ��� ������ � ������
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
� ������� ��������� ����� Template ������� ������ ������.
��� �����, ����� ����� ��� �������� � ������ ������ ������.
*/

template<typename T1, typename T2>
class MyClass
{
public:
    MyClass(T1 value, T2 value_2) // �����������, � ������� ����������� �������� �� main ���������� value � ������� ���������� value
    {
        this->value = value;
        this->value_2 = value_2;
    }

    void DataTypeSize() // �������, ������� ����� �������� ������ ����������
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
    int a = 5; // ������� ���������� "�", ����������� �� �������� "5"
    Point r; // ������� ������ r ���� Point

    MyClass<int, Point> c(a, r); // ������� ������ ������ MyClass, ��������� � <int>, ��� �� ����� �������� � ����� ������ int, ��� ��� �� ���������, � �������� ���� ���������� "�"
    
    c.DataTypeSize(); // �������� ������� DataTypeSize ��� ������� "c"

    return 0;
}

