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


//����� ������
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





// ����� �������
template<typename T1>
class TypeInfo : public TypeSize<T1>
{
public:
    TypeInfo(T1 value):TypeSize<T1>(value)
    {

    }

    void ShowTypeName()
    {
        cout << "�������� ����: " << typeid(TypeSize<T1>::value).name() << endl;
    }
};










int main()
{

    setlocale(LC_ALL, "ru");

    double a = 2; // ������� ������ r ���� Point

    TypeSize<double> c(a);

   
    c.DataTypeSize(); // �������� ������� DataTypeSize ��� ������� "c"
    return 0;
}