#include <iostream>
#include <string>
#include "../Salud/Persona.cpp"

// paradigmas de la [rogramacion: permiten solucionalr cosas que por lo genereal no se pueden resolver
using namespace std;

class Inicio
{
public:
    void ejecutar()
    {
        Persona user;
        user.pedir_datos();
        user.mostrar_personas();
        user.calcularlmc();
        user.mayoredad();

        if (user.calcularlmc() < 20)
        {
            cout << "el peso esta por debajo de lo ideal" << endl;
        }
        else if (user.calcularlmc() >= 20 || user.calcularlmc() <= 25)
        {
            cout << "el peso es ideal" << endl;
        }
        else if (user.calcularlmc() > 25)
        {
            cout << "tiene sobrepeso" << endl;
        }
    }
};

// leer herencia, encapsulamiento, sobrecarga, interfaces, clases abstractas en c++
// como invocar los metodos desde inicio cuando los metodos son privados (hacerlo)

//  accesores set: permite crear, ingresar, registrar, siempre lleva parametros, los pareametors son los atributos modifiacdor de acceso:void (siempre)
// void setname(string x )[
//     name = x; //cuando el nombre es diferente
//     thid->name=name //cuando el nomnre es igual
// ]

// get: consultar datos, no ndecesita parametros
// String getname(){
//     return name;
// }

// encapsular = get, set
// declarar atributos, contructor, metodos accesores, metodos propios

// int main(){
//     oso.getname(); //mostrar los datos
//     oso.setname("lulo");
// }