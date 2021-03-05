#include <iostream>
#include <math.h>
using namespace std;

long double fac(int n)
{
if (n == 0 || n == 1) return 1;
return n * fac(n - 1);
}

int main()
{
    setlocale(LC_ALL, "Russian");
float y = 0;
int v = 0;
long double p = 0;
long double a= 0;
long double b= 0;
int k;
cout << "введите интенсивность" << endl;
cin >> y;
cout << "введите количество каналов" << endl;
cin >> v;
a = pow(y, v) / fac(v);
int i = 0;
for (i = 0; i < (v + 1); i++)
{
b = b + (pow(y, i) / fac(i));
k = 1;
}
p = a / b;
cout << "вер " << p << endl;
}
