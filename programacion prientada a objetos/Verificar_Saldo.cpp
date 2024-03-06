#include <iostream>
#include <string>

using namespace std;

class Verificar_saldo
{
public:
    float saldo;

public:
    Verificar_saldo(float total)
    {
        saldo = total;
    }

    float obtener_saldo()
    {
        return saldo;
    }
};

int main()
{
    Verificar_saldo cantidad(100000);
    cout << "Saldo actual: $" << cantidad.obtener_saldo() << end;
}
