#include <iostream>
#include "mycomplex.h"

using namespace std;

int main()
{
  //тестирование класса комплексных чисел

Complex A,B(-4), C(23.0, 45.9);

cout<<A <<"A:"<< A<<", B:" <<B <<", C:"<< C << endl; 

A=B+C;

cout<<"A=B+C,A="<< A <<endl;

Complex M=B-C;

cout<< "M = B - C, M = " << M << endl;

Complex N=M*A;

cout<<"N*A="<<N<<endl;

Complex O =M/4.45;

cout<<"O=M/4.45="<< O <<endl;

Complex D;

cout<<"Enter complex number D = "; cin >>D;

A+=C+D;

cout << "D = " << D << "\nA = " << A << endl;

return 0;}
