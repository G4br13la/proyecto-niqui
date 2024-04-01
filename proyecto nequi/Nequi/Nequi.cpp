#include <iostream>
#include <string>

using namespace std;

class Nequi
{
private:
    int transferencia;
    float recarga;
    string numeroCelular;
    string operadorCelular;
    unsigned int recargaCelular;
    string numeroTransferencia;
    int montoTransferencia;
    int montoColchon;
    int transferenciaDinero;
    string movimientosRecarga[5][3];
    string (*puntero)[5][3] = &movimientosRecarga;
    float dolares;
    float pesos;
    string arreglos_celular[10000000];
    string contraseñas[10000000];

public:

//get
    int gettransferencia()
    {
        return transferencia;
    }

    float getrecarga()
    {
        return recarga;
    }
    string getnumeroCelular()
    {
        return numeroCelular;
    }

    string getoperadorCelular()
    {
        return operadorCelular;
    }

    unsigned int get_recargaCelular()
    {
        return recargaCelular;
    }

    string getnumeroTransferencia()
    {
        return  numeroTransferencia;
    }

    int get_montoTransferencia()
    {
        return montoTransferencia;
    }

    int get_montoColchon()
    {
        return montoColchon;
    }

    int get_transferenciaDinero()
    {
        return transferenciaDinero;
    }

    vector<string> get_movimientosRecarga()
    {
        return movimientosRecarga[5][3];
    }

    vector<string> get_puntero()
    {
        return puntero[5][3];
    }

    float get_dolares()
    {
        return dolares;
    }

    float get_pesos()
    {
        return pesos;
    }

    string get_arreglos_celular()
    {
        return arreglos_celular[10000000];
    }

    string getcontraseias()
    {
        return contraseñas[10000000];
    }

        //set 

    void settransferencia(int x)
    {
        this->transferencia = x;
    }

    void setrecarga(float y)
    {
        this->recarga = y;
    }
    void setnumeroCelular(string z)
    {
        this->numeroCelular = z;
    }

    void setoperadorCelular(string u)
    {
        this->operadorCelular = u;
    }

    void set_recargaCelular(unsigned int q)
    {
        this-> recargaCelular = q;
    }

    void setnumeroTransferencia(string g)
    {
        this->numeroTransferencia = g;
    }

    void set_montoTransferencia(int h)
    {
        this->montoTransferencia = h;
    }

    void set_montoColchon(int j)
    {
        this->montoColchon = j;
    }

    void set_transferenciaDinero(int i)
    {
        this->transferenciaDinero = i;
    }

    void set_movimientosRecarga(string k)
    {
        this->movimientosRecarga[5][3] = k;
    }

    void set_puntero(string t)
    {
        this->puntero[5][3] = t;
    }

    void set_dolares(float r)
    {
        this->dolares = r;
    }

    void set_pesos(float o)
    {
        this->pesos = o;
    }

    void set_arreglos_celular(string m)
    {
        this->arreglos_celular[10000000] = m;
    }

    void setcontrasenias(string n)
    {
        this->contraseñas[10000000] = n;
    }
        
    void registrar_usuario(string arreglos_celular[], string contraseñas[])
    {
        string numero_celular;
        string password;

        cout << "Ingrese numero de celular: ";
        cin >> numero_celular;

        while (numero_celular.size() != 10)
        {
            cout << "Error! El número de celular debe ser de 10 dígitos." << endl;
            cout << "Ingrese numero de celular: ";
            cin >> numero_celular;
        }

        for (int i = 0; i < arreglos_celular->length(); i++)
        {
            if (arreglos_celular[i] == numero_celular)
            {
                cout << "El usuario ya existe." << endl;
                return;
            }
        }

        cout << "Ingrese su contraseña: ";
        cin >> password;

        while (password.size() != 4)
        {
            cout << "Error! La contraseña debe tener 4 dígitos." << endl;
            cout << "Ingrese su contraseña: ";
            cin >> password;
        }

        arreglos_celular[0] = numero_celular;
        contraseñas[0] = password;

        cout << "Registro exitoso." << endl;
    }

    bool iniciar_sesion(string arreglos_celular[], string contraseñas[])
    {
        string numero_celular;
        string password;
        int contador = 3;
        bool encontrado = false;

        while (contador > 0)
        {

            cout << "usted tiene " << contador << " intentos." << endl;
            cout << "ingrese numero de celular: ";
            cin >> numero_celular;
            cout << "ingrese contraseña: ";
            cin >> password;

            for (int i = 0; i < arreglos_celular->length(); i++)
            {
                if (arreglos_celular[i] == numero_celular && contraseñas[i] == password)
                {
                    encontrado = true;
                    break;
                }
            }
            if (encontrado == true)
            {
                cout << "ingreso exitoso!";
                return encontrado;
            }
            else
            {
                cout << "¡Upps! Parece que tus datos de acceso no son correctos,";
                contador = contador - 1;
                if (contador == 0)
                {
                    cout << "Su Usuario a sido bloqueado";
                    return encontrado;
                }
            }
        }
        return encontrado;
    }

    void mostrarMovimientosRecarga(string (*puntero)[5][3])
    {
        for (int i = 0; i < 5; i++)
        {
            cout << "El numero de celular es : " << *puntero[i][0] << endl;
            cout << "El Operador movil es : " << *puntero[i][1] << endl;
            cout << "El monto a recargar es de : $" << *puntero[i][2] << endl;
        }
    }

    int indiceDisponible(string movimientosRecarga[5][3])
    {
        for (int i = 0; i < 5; i++)
        {
            if (movimientosRecarga[i] == nullptr)
            {
                return i;
            }
        }
    }
    void Recargar(unsigned int recargaCelular, string operadorCelular, string numeroCelular, string movimientosRecarga[5][3])
    {

        cout << "Usted ha seleccionado la opción de Recarga de celular" << endl;
        cout << "Por favor ingrese el numero celular a recargar: ";
        cin >> numeroCelular;
        cout << "Ingrese el operador de su linea celular: " << endl;
        cin >> operadorCelular;
        cout << "Ingrese el valor a recaragar por favor: " << endl;
        cin >> recargaCelular;
        cout << "Usted ha recargado exitosamente su linea celular, a continuación vera el resumen de su transacción: " << numeroCelular << " , " << operadorCelular << " , $" << recargaCelular << endl;

        indiceDisponible(movimientosRecarga);
        int i = indiceDisponible(movimientosRecarga);
        movimientosRecarga[i][0] = numeroCelular;
        movimientosRecarga[i][1] = operadorCelular;
        movimientosRecarga[i][2] = recargaCelular;

        mostrarMovimientosRecarga(puntero);
    }

    void transferencia_1(float recarga)
    {

        cout << "Usted ha seleccionado la opción de Recarga de Direct TV (prepago)" << endl;
        cout << "¿Con cuanto dinero desea recargar la cuenta?" << endl;
        cin >> recarga;
        cout << "Su recarga por valor de $" << recarga << " ha sido efectuada con exito" << endl;
    }

    void transferenciaMonney(int transferencia, string numeroTransferencia, int montoTransferencia)
    {

        cout << "Usted ha seleccionado la opción de enviar Dinero." << endl;
        cout << "Escoja la opción que desea usar para transferir el dinero. \n 1). Numero de nequi \n 2). envio por transfiya \n 3). Envio a otro banco " << endl;
        cin >> transferencia;
        switch (transferencia)
        {
        case 1:
            cout << "Usted ha selecciondo la opción transferencia a un numero de Nequi." << endl;
            cout << "Por favor ingrese el numero al cual desea realizar la transferencia: " << endl;
            cin >> numeroTransferencia;
            cout << "Por favor ingrese el monto a recargar: " << endl;
            cin >> montoTransferencia;
            cout << "Usted ha realizado una recarga de $" << montoTransferencia << " al numero " << numeroTransferencia << endl;

            break;
        case 2:
            cout << "Usted ha selecciondo la opción transferencia por transfiya." << endl;
            cout << "Por favor ingrese el numero al cual desea realizar la transferencia: " << endl;
            cin >> numeroTransferencia;
            cout << "Por favor ingrese el monto a recargar: " << endl;
            cin >> montoTransferencia;
            cout << "Usted ha realizado una recarga a transfiya de $" << montoTransferencia << " al numero " << numeroTransferencia << endl;

            break;
        case 3:
            cout << "Usted ha selecciondo la opción transferencia a otro banco." << endl;
            cout << "Por favor ingrese el numero de cuenta al cual desea realizar la transferencia: " << endl;
            cin >> numeroTransferencia;
            cout << "Por favor ingrese el monto a recargar: " << endl;
            cin >> montoTransferencia;
            cout << "Usted ha realizado una recarga a la cuenta #" << numeroTransferencia << " de $" << montoTransferencia << endl;
        }
    }

    void colchon(int montoColchon)
    {

        cout << "Usted ha seleccionado la opción de Colchon" << endl;
        cout << "Por favor ingrese el dinero que desea guardar en el colchón: " << endl;
        cin >> montoColchon;
        cout << "Usted ha guardado $" << montoColchon << " en su colchón. " << endl;
    }

    void dolar(float dolares, float pesos)
    {

        cout << "Usted ha seleccionado la opción de consulta de " << endl;
        cout << "ingrse la cantidad de dolares que desea cambiar: "; // aca se pasa de dolares a pesos
        cin >> dolares;

        float cantidad_dol = dolares * 4.000;

        cout << "la cantidad que tiene en dolares es de: " << cantidad_dol << "pesos" << endl;

        cout << "ingrse la cantidad de pesos que desea cambiar: "; // aca se pasa de pesos a dolares
        cin >> pesos;

        float cantidad_pes = pesos / 4.000;

        cout << "la cantidad que tiene en pesos es de: " << cantidad_pes << " dolares" << endl;
    }
};

int main()
{

    return 0;
}
