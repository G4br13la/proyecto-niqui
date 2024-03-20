#include <iostream>
#include <string>

using namespace std;

class Persona
{
private:
    string tipoDoc;
    int documento;
    string nombre;
    string apellido;
    float peso;
    double estatura;
    int edad;
    string sexo;

    string getTipoDoc() const { return tipoDoc; }
    string getDocumento() const { return sexo; }
    string getNombre() const { return nombre; }
    string getApellido() const { return apellido; }

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
    Persona() {}

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

    int calcularlmc()
    {
        int peso_actual;
        peso_actual = peso / (estatura * estatura);
        return peso_actual;
    }

    void mayoredad()
    {
        if (edad > 18)
        {
            cout << "es mayor de edad" << endl;
        }
        else
        {
            cout << "es menor de edad" << endl;
        }
    }
};
