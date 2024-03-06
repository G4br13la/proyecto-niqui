#include <iostream>
#include <string>

using namespace std;

class Animal
{
    // atributos

public:
    string nombreAnimal;
    int edad;
    // metodos: valor del retorno nombre (parametros)

public:
    void crearAnimal()
    {
        cout << "ingrese nombre del animal: ";
        cin >> nombreAnimal;
        cout << "ingrese la edad del animal: ";
        cin >> edad;
    }
    void consultarNimal()
    {
        cout << "el nombre del animal es: " + nombreAnimal;
    }
};

int main()
{
    // instancia de clase, objeto de la clase, clase del objeto
    Animal oso;
    Animal tigre;
    // acceder a los atrubutos
    oso.nombreAnimal = "Tony";
    // acceder a metodos=nombre objeto.nombremetodo
    oso.crearAnimal();
}

class Carro
{
    // atributos

public:
    string motor;
    string modelo;
    int año_del_carro;

    // constructor

    Carro(string x, string y, int z)
    {
        motor = x;
        modelo = y;
        año_del_carro = z;
    }
};

// modular (sacar las clases) atributos, metodos y constructores