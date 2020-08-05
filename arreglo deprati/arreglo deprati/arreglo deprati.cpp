#include <iostream>
using namespace std;
void llenararreglo();
void multiplcararreglo(double a[]);
void imprimirarreglo(double a[], double b[]);
int main()
{
    llenararreglo();
    return 0;
}
void llenararreglo()
{
    double arr[10];
    int valor, contador = 0, x = 1;
    bool ingresa = false;
    do 
    {
        cout << "ingrese valor "<< x <<" entre 50 y 100:" ;
        cin >> valor;
        if (valor>=50 & valor <=100)
        {
            arr[contador] = valor;
            contador++;
            x++;
        }
        else
        {
            cout << "el valor no es valido" << endl;
        }
        if (contador==10)
        {
            ingresa = true;
        }
    } while (ingresa == false);
    multiplcararreglo(arr);
}
void multiplcararreglo(double a[])
{
    double b[10];
    for (int i = 0; i < 10; i++)
    {
        b[i] = a[i] * 0.5;
    }
    imprimirarreglo(a,b);
} 
void imprimirarreglo(double a[], double b[])
{
    cout << endl;
    cout << "los valores multiplicados por 0.5 son " << endl;
    cout << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << " x " << "0.5" << " = " << b[i] << endl;
    }
}