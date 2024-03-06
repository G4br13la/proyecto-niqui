#include <iostream>
#include <string>

using namespace std;

class Bolsillos
{
public:
    float saldo;

public:
    Bolsillos(float total)
    {
        saldo = total;
    }

    float obtener_saldo()
    {
        return saldo;
    }

    void depositar_bolsillo(float cantidad)
    {
        cout << "¿cuanto quiere ingresar? " << endl;
        cin >> cantidad >> endl;
        saldo += cantidad;
    }

    void retirar_bolsillo(float cantidad)
    {
        if (cantidad > 0)
        {
            saldo -= cantidad;
        }
        else
        {
            cout << "no hay suficiente plata" << endl;
        }
    }
};

int main()
{
    Bolsillos bolsillo(10.455);

    // Depositar dinero
    bolsillo.depositar_bolsillo(5.455);
    cout << "Saldo después de depositar: " << endl;
    cin >> bolsillo.obtener_saldo() >> endl;

    // Retirar dinero
    bolsillo.retirar_bolsillo(2.000);
    cout << "Saldo después de retirar: " << endl;
    cin >> bolsillo.obtener_saldo() << endl;

    return 0;
}
