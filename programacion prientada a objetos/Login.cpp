#include <iostream>
#include <string>

using namespace std;

class Login
{
public:
    int usuario;
    int contraseña;

public:
    Login(int user, int password)
    {
        usuario = user;
        contraseña = password;
    }

    void ingresar_credenciales()
    {
        cout << "ingrese numero de telefono: ";
        cin >> usuario;
        cout << "ingrese la contraseña: ";
        cin >> contraseña;
    }

    bool verificar_datos(int user, int password)
    {
        bool encontrado;
        if (user == usuario && password == contraseña)
        {
            encontrado = true;
            return true;
        }
        else
        {
            encontrado = false;
            return false;
        }
    }
};

int main()
{
    int user;
    int password;
    Login ingreso(10000);
    ingreso.verificar_datos(user, password);
}

// modular (sacar las clases) atributos, metodos y constructores