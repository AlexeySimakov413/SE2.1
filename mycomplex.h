#ifndef _MY_COMPLEX_H_
#define _MY_COMPLEX_H_

#include <iostream> 

using namespace std;

// Класс Complex для работы с комплексными числами
class Complex {
private:
    double Re; // Действительная часть комплексного числа
    double Im; // Мнимая часть комплексного числа

public:
    // Конструктор по умолчанию, инициализирует комплексное число с заданными значениями (по умолчанию 0)
    Complex(double aRe = 0, double aIm = 0);

    // Конструктор копирования, создает новый объект Complex на основе существующего
    Complex(const Complex&);

    // Деструктор, освобождает ресурсы (в данном случае просто обнуляет значения)
    ~Complex();

    // Метод для установки значений действительной и мнимой частей
    void Set(double aRe, double aIm = 0);

    // Оператор приведения к типу double, возвращает модуль комплексного числа
    operator double();

    // Метод для вычисления модуля комплексного числа
    double abs();

    // Дружественная функция для перегрузки оператора ввода >>
    friend istream& operator>>(istream&, Complex&);

    // Дружественная функция для перегрузки оператора вывода <<
    friend ostream& operator<<(ostream&, Complex&);

    // Оператор сложения двух комплексных чисел
    Complex operator+(const Complex&);

    // Оператор вычитания двух комплексных чисел
    Complex operator-(const Complex&);

    // Оператор сложения комплексного числа с действительным числом
    Complex operator+(const double&);

    // Дружественная функция для сложения действительного числа и комплексного числа
    friend Complex operator+(const double&, const Complex&);

    // Оператор вычитания действительного числа из комплексного числа
    Complex operator-(const double&);

    // Дружественная функция для вычитания комплексного числа из действительного числа
    friend Complex operator-(const double&, const Complex&);

    // Оператор умножения двух комплексных чисел
    Complex operator*(const Complex&);

    // Оператор умножения комплексного числа на действительное число
    Complex operator*(const double&);

    // Дружественная функция для умножения действительного числа на комплексное число
    friend Complex operator*(const double&, const Complex&);

    // Оператор деления комплексного числа на действительное число
    Complex operator/(const double&);

    // Оператор += для сложения комплексных чисел
    Complex& operator+=(const Complex&);

    // Оператор -= для вычитания комплексных чисел
    Complex& operator-=(const Complex&);

    // Оператор *= для умножения комплексных чисел
    Complex& operator*=(const Complex&);

    // Оператор += для сложения комплексного числа с действительным числом
    Complex& operator+=(const double&);

    // Оператор -= для вычитания действительного числа из комплексного числа
    Complex& operator-=(const double&);

    // Оператор *= для умножения комплексного числа на действительное число
    Complex& operator*=(const double&);

    // Оператор /= для деления комплексного числа на действительное число
    Complex& operator/=(const double&);

    // Оператор присваивания для комплексных чисел
    Complex& operator=(const Complex&);

    // Оператор присваивания для действительных чисел
    Complex& operator=(const double&);
};

#endif // Завершение защиты от повторного включения