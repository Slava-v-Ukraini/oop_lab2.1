#pragma once
#include <iostream>
#include <string>
using namespace std;

class Goods {
private:
    double first;  // ціна товару
    int second;    // кількість одиниць товару

public:
    // Конструктори
    Goods();
    Goods(double price, int quantity);
    Goods(const Goods& other);

    // Деструктор
    ~Goods();

    // Методи доступу
    double GetPrice() const { return first; }
    void SetPrice(double price) { first = price; }

    int GetQuantity() const { return second; }
    void SetQuantity(int quantity) { second = quantity; }

    // Метод для обчислення вартості товару
    double cost() const { return first * second; }

    // Операція присвоєння
    Goods& operator=(const Goods& other);

    // Операції введення/виведення
    friend ostream& operator<<(ostream& out, const Goods& g);
    friend istream& operator>>(istream& in, Goods& g);

    // Приведення до рядка
    operator string() const;
};