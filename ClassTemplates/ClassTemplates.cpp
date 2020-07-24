#include <iostream>
using namespace std;

/*
� ������� ��������� ����� Template ������� ������ ������. 
��� �����, ����� ����� ��� �������� � ������ ������ ������.
*/

template<typename T>
class MyClass
{
public:
    MyClass(T value) // �����������, � ������� ����������� �������� �� main ���������� value � ������� ���������� value
    {
        this->value = value;
    }

    void DataTypeSize() // �������, ������� ����� �������� ������ ����������
    {
        cout << sizeof(value) << endl;
    }

private:
    T value;
};

int main()
{
    int a = 5; // ������� ���������� "�", ����������� �� �������� "5"

    MyClass<int> c(a); // ������� ������ ������ MyClass, ��������� � <int>, ��� �� ����� �������� � ����� ������ int, ��� ��� �� ���������, � �������� ���� ���������� "�"
    
    c.DataTypeSize(); // �������� ������� DataTypeSize ��� ������� "c"

    return 0;
}

