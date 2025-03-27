#pragma once
#include <iostream>
#include <string>
using namespace std;

class Goods {
private:
    double first;  // ���� ������
    int second;    // ������� ������� ������

public:
    // ������������
    Goods();
    Goods(double price, int quantity);
    Goods(const Goods& other);

    // ����������
    ~Goods();

    // ������ �������
    double GetPrice() const { return first; }
    void SetPrice(double price) { first = price; }

    int GetQuantity() const { return second; }
    void SetQuantity(int quantity) { second = quantity; }

    // ����� ��� ���������� ������� ������
    double cost() const { return first * second; }

    // �������� ���������
    Goods& operator=(const Goods& other);

    // �������� ��������/���������
    friend ostream& operator<<(ostream& out, const Goods& g);
    friend istream& operator>>(istream& in, Goods& g);

    // ���������� �� �����
    operator string() const;
};