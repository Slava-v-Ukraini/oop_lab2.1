#include <iostream>
#include "Goods.h"
using namespace std;

int main() {
    Goods item1(100.50, 10);  // ��������� ������ � ����� 100.50 �� ������� 10
    cout << "Item1: " << item1 << endl;
    cout << "Cost of Item1: " << item1.cost() << endl;

    Goods item2;
    cin >> item2;  // �������� ������ � ���������
    cout << "Item2: " << item2 << endl;
    cout << "Cost of Item2: " << item2.cost() << endl;

    return 0;
}