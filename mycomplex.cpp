#include<iostream>
#include <cmath>
#include "mycomplex.h"

using namespace std;

// Конструктор класса Complex, инициализирует действительную и мнимую части
Complex::Complex(double aRe, double aIm) {
    Re = aRe;
    Im = aIm;
}

// Конструктор копирования, создает новый объект Complex на основе существующего
Complex::Complex(const Complex& aRval) {
    Re = aRval.Re;
    Im = aRval.Im;
}

// Деструктор класса Complex, обнуляет действительную и мнимую части
Complex::~Complex() {
    Re = 0.0;
    Im = 0.0;
}

// Метод для установки значений действительной и мнимой частей
void Complex::Set(double aRe, double aIm) {
    Re = aRe;
    Im = aIm;
}

// Оператор приведения к типу double, возвращает модуль комплексного числа
Complex::operator double() {
    return abs();
}

// Метод для вычисления модуля комплексного числа
double Complex::abs() {
    return sqrt(Re * Re + Im * Im);
}

// Оператор сложения двух комплексных чисел
Complex Complex::operator+ (const Complex& aRval) {
    Complex Result;
    Result.Re = Re + aRval.Re;
    Result.Im = Im + aRval.Im;
    return Result;
}

// Оператор вычитания двух комплексных чисел
Complex Complex::operator- (const Complex& aRval) {
    Complex Result;
    Result.Re = Re - aRval.Re;
    Result.Im = Im - aRval.Im;
    return Result;
}

// Оператор сложения комплексного числа с действительным числом
Complex Complex::operator+ (const double& aval) {
    Complex result;
    result.Re = Re + aval;
    result.Im = Im;
    return result;
}

// Оператор вычитания действительного числа из комплексного числа
Complex Complex::operator- (const double& aRval) {
    Complex Result(*this);
    Result.Re = Re - aRval;
    return Result;
}

// Оператор умножения двух комплексных чисел
Complex Complex::operator* (const Complex& aRval) {
    Complex Result;
    Result.Re = Re * aRval.Re - Im * aRval.Im;
    Result.Im = Re * aRval.Im + Im * aRval.Re;
    return Result;
}

// Оператор умножения комплексного числа на действительное число
Complex Complex::operator* (const double& aRval) {
    Complex Result;
    Result.Re = Re * aRval;
    Result.Im = Im * aRval;
    return Result;
}

// Оператор деления комплексного числа на действительное число
Complex Complex::operator/ (const double& aRval) {
    Complex Result;
    Result.Re = Re / aRval;
    Result.Im = Im / aRval;
    return Result;
}

// Оператор += для сложения комплексных чисел
Complex& Complex::operator+= (const Complex& arval) {
    Re += arval.Re;
    Im += arval.Im;
    return *this;
}

// Оператор -= для вычитания комплексных чисел
Complex& Complex::operator-= (const Complex& aRval) {
    Re -= aRval.Re;
    Im -= aRval.Im;
    return *this;
}

// Оператор *= для умножения комплексных чисел
Complex& Complex::operator*= (const Complex& aRval) {
    double tmpRe = Re;
    Re = Re * aRval.Re - Im * aRval.Im;
    Im = Im * aRval.Re + tmpRe * aRval.Im;
    return *this;
}

// Оператор += для сложения комплексного числа с действительным числом
Complex& Complex::operator+= (const double& aRval) {
    Re += aRval;
    return *this;
}

// Оператор -= для вычитания действительного числа из комплексного числа
Complex& Complex::operator-= (const double& aRval) {
    Re -= aRval;
    return *this;
}

// Оператор *= для умножения комплексного числа на действительное число
Complex& Complex::operator*= (const double& aRval) {
    Re *= aRval;
    Im *= aRval;
    return *this;
}

// Оператор /= для деления комплексного числа на действительное число
Complex& Complex::operator/= (const double& aRval) {
    Re /= aRval;
    Im /= aRval;
    return *this;
}

// Оператор присваивания для комплексных чисел
Complex& Complex::operator= (const Complex& aRval) {
    Re = aRval.Re;
    Im = aRval.Im;
    return *this;
}

// Оператор присваивания для действительных чисел
Complex& Complex::operator= (const double& aRval) {
    Re = aRval;
    Im = 0.0;
    return *this;
}

// Оператор ввода для комплексных чисел
istream& operator>>(istream& stream, Complex& a) {
    char tmp[256];
    stream >> a.Re >> a.Im >> tmp;
    return stream;
}

// Оператор вывода для комплексных чисел
ostream& operator<<(ostream& stream, Complex& a) {
    stream << a.Re;
    if (!(a.Im < 0)) stream << '+';
    stream << a.Im << 'i';
    return stream;
}

// Оператор сложения действительного числа и комплексного числа
Complex operator+ (const double& aLval, const Complex& aRval) {
    Complex Result;
    Result.Re = aLval + aRval.Re;
    Result.Im = aRval.Im;
    return Result;
}

// Оператор вычитания комплексного числа из действительного числа
Complex operator- (const double& aLval, const Complex& aRval) {
    Complex Result;
    Result.Re = aLval - aRval.Re;
    Result.Im = -aRval.Im;
    return Result;
}

// Оператор умножения действительного числа на комплексное число
Complex operator* (const double& aLval, const Complex& a) {
    Complex r;
    r.Re = aLval * a.Re;
    r.Im = aLval * a.Im;
    return r;
}