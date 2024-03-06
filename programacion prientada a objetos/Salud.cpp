#include <iostream>
#include <string>

using namespace std;

class Persona
{
public:
    string tipoDoc;
    int documento;
    string nombre;
    string apellido;
    float peso;
    double estatura;
    int edad;
    string sexo;

    // si se crea in constructor vacio, entonces al crear un objeto en el main va a salir error poprque toc a i ngresarle todos los datos
    //  Persona(string tipoDoc ,string nombre, string apellido, int peso, double estatura, int edad, string sexo){
    //      tipoDoc=tipoDoc;
    //      documento=documento;
    //      nombre=nombre;
    //      apellido=apellido;
    //      peso=peso;
    //      estatura=estatura;
    //      edad=edad;
    //      sexo=sexo;
    //  }

public:
    void pedir_datos()
    {
        cout << "ingreses datos: " << endl;
        cout << "nombre: " << nombre << endl;
        cout << "apellido: " << apellido << endl;
        cout << "tipo de documento: " << tipoDoc << endl;
        cout << "documento: " << documento << endl;
        cout << "peso: " << peso << endl;
        cout << "estatura: " << estatura << endl;
        cout << "sexo: " << sexo << endl;
    }

    void mostrar_personas()
    {
        return pedir_datos();
    }

    void calcularlmc()
    {
        int peso_actual;
        peso_actual = peso / estatura;

        if (peso < 20)
        {
            cout << "el peso esta por debajo de lo ideal" << endl;
        }
        else if (peso >= 20 || peso <= 25)
        {
            cout << "el peso es ideal" << endl;
        }
        else if (peso > 25)
        {
            cout << "tiene sobrepeso" << endl;
        }
    }

    void mayoredad()
    {
        if (edad > 18)
        {
            cout >> "es mayor de edad" >> endl;
        }
        else
        {
            cout >> "es menor de edad" >> endl;
        }
    }
};

int main()
{

    Persona user;

    user.pedir_datos();

    user.mostrar_personas();

    user.calcularlmc();

    user.mayoredad();

    return 0;
}
