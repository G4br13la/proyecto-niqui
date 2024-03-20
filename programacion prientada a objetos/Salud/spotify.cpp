#include <iostream>
#include <string>
#include <list>

using namespace std;

class Cancion
{
private:
    string nombre_cancion;
    float duracion;
    string nombre_artista;

public:
    void cancion()
    {
    }

    string getTitulo() const
    {
        return nombre_cancion;
    }

    string getArtista() const
    {
        return nombre_artista;
    }

    int getDuracion() const
    {
        return duracion;
    }

    void setnombreartista(string x)
    {
        nombre_artista = x;
    }

    void setnombrecancion(string y)
    {
        nombre_cancion = y;
    }

    void setduracion(float z)
    {
        duracion = z;
    }
};

void agregarCancion(list<Cancion> can)
{
    string a;
    string b;
    float c;

    Cancion aux;

    cout << "Cual es el nombre de la cancion: ";
    cin >> a;
    aux.setnombrecancion(a);

    cout << "Cual es el nombre del artista: ";
    cin >> b;
    aux.setnombreartista(b);
    cout << "Cual es la duracion: ";
    cin >> c;
    aux.setduracion(c);

    can.push_back(aux);
}

int main()
{

    list<Cancion> cancionesglobales;

    agregarCancion(cancionesglobales);

    return 0;
}

// listar las canciones entre 1 y 3 min
// ordenar por letra de abcdario
// mostrar las canciones que duren mas de 3 min