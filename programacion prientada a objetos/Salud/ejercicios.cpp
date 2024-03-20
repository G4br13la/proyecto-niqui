#include <iostream>
#include <string>
#include <list>

using namespace std;

int main()
{
    list<string> frutas;
    frutas.push_back("manzana");
    frutas.push_back("peras");
    frutas.push_back("uvas");
    frutas.push_back("melon");
    frutas.push_back("fresas");

    for (const auto &elemento : frutas)
    {
        cout << elemento << "";
    }

    auto it = next(frutas.begin(), 1);

    frutas.insert(it, "arandanos"); // iterador, elementos a intrgrar

    for (const auto &elemento : frutas)
    {
        cout << elemento << "";
    }
    frutas.pop_front();

    auto it1 = next(frutas.begin(), 1);
    frutas.erase(it1);     // cuando no se ue quiero remover
    frutas.remove("uvas"); // cuando si se

    frutas.front();
    frutas.back();
    cout << *it1; // valor que trae el apuntador

    frutas.empty();
    frutas.size(); // #num de elementos que tiene la lista
    return 0;
}

// crear las listas de reproduccion de spotifi (crear algoritmos que tenga muchas canciones)y que el usuario pueda crear su propia lista de canciones
// crear una lista enlaazda con mi amigo