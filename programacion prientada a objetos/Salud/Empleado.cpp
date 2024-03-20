#include "Persona.cpp"

class Empleado : public Persona
{
private:
    string cargo;
    float valorHora;
    float horasTrabajadas;
    string departamento;
    int fecha_nacimiento;

public:
    float calcularHonorarios() const
    {
        double total = valorHora * horasTrabajadas;
        double reteica = ((total * 0.966) / 100);
        return total - reteica;
    }

    void pedir_datos()
    {
        cout << "ingreses datos: " << endl;
        cout << "cargo: " << cargo << endl;
        cout << "valorHora: " << valorHora << endl;
        cout << "horasTrabajadas: " << horasTrabajadas << endl;
        cout << "departamento: " << departamento << endl;
    }
    void mostrar_personas()
    {

        cout << "Cargo: " << cargo << endl;
        cout << "Horas trabajadas: " << horasTrabajadas << endl;
        cout << "Valor por hora: " << valorHora << endl;
        cout << "Total a pagar: " << calcularHonorarios() << endl;
    }

    int mayor_edad(int anio_nacimiento)
    {
        int anio_actual;
        cout << "¿cual es su año de nacimiento?" << anio_nacimiento << endl;
        cout << "¿cual es el año de actual?" << anio_actual << endl;

        return anio_actual - anio_nacimiento;
    }
};

int main()
{

    Empleado user;

    int anio_nacimiento;

    user.pedir_datos();

    user.mostrar_personas();

    user.mayor_edad(anio_nacimiento);

    user.calcularHonorarios();

    return 0;
}

// ordenada, finita y lineal