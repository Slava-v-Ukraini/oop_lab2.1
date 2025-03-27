#include "Goods.h"
#include <sstream>

// ����������� ��� ���������
Goods::Goods() : first(0.0), second(0) {}

// ����������� � �����������
Goods::Goods(double price, int quantity) {
    if (price <= 0 || quantity <= 0) {
        cout << "Error: Invalid parameters for price or quantity!" << endl;
        exit(1);  // ���������� �������� ��� ����������� ����������
    }
    first = price;
    second = quantity;
}

// ����������� ���������
Goods::Goods(const Goods& other) {
    first = other.first;
    second = other.second;
}

// ����������
Goods::~Goods() {}

// �������� ���������
Goods& Goods::operator=(const Goods& other) {
    if (this == &other) return *this;
    first = other.first;
    second = other.second;
    return *this;
}

// �������� ���������
ostream& operator<<(ostream& out, const Goods& g) {
    out << "Price: " << g.first << ", Quantity: " << g.second;
    return out;
}

// �������� ��������
istream& operator>>(istream& in, Goods& g) {
    cout << "Enter price: ";
    in >> g.first;
    cout << "Enter quantity: ";
    in >> g.second;
    return in;
}

// ���������� �� �����
Goods::operator string() const {
    stringstream ss;
    ss << "Price: " << first << ", Quantity: " << second;
    return ss.str();
}