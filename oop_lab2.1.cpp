#include "Goods.h"
#include <sstream>

// Конструктор без параметрів
Goods::Goods() : first(0.0), second(0) {}

// Конструктор з параметрами
Goods::Goods(double price, int quantity) {
    if (price <= 0 || quantity <= 0) {
        cout << "Error: Invalid parameters for price or quantity!" << endl;
        exit(1);  // Завершення програми при некоректних параметрах
    }
    first = price;
    second = quantity;
}

// Конструктор копіювання
Goods::Goods(const Goods& other) {
    first = other.first;
    second = other.second;
}

// Деструктор
Goods::~Goods() {}

// Операція присвоєння
Goods& Goods::operator=(const Goods& other) {
    if (this == &other) return *this;
    first = other.first;
    second = other.second;
    return *this;
}

// Операція виведення
ostream& operator<<(ostream& out, const Goods& g) {
    out << "Price: " << g.first << ", Quantity: " << g.second;
    return out;
}

// Операція введення
istream& operator>>(istream& in, Goods& g) {
    cout << "Enter price: ";
    in >> g.first;
    cout << "Enter quantity: ";
    in >> g.second;
    return in;
}

// Приведення до рядка
Goods::operator string() const {
    stringstream ss;
    ss << "Price: " << first << ", Quantity: " << second;
    return ss.str();
}