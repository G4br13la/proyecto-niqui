#include <iostream>
#include <string>
#include <vector>

using namespace std;

// metodos de busqueda
// lineal

bool busquedalineal(const vector<int> &array, int target)
{
    for (int elemento : array)
    {
        if (elemento == target)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    vector<int> numbers = {1, 2, 3, 4, 5};
    int target = 3;
    if (busquedalineal(numbers, target))
    {
        cout << "el elemento " << target << "esta en el array" << endl;
    }
    else
    {
        cout << "el elemento " << target << "no esta en el array" << endl;
    }
    return 0;
}

// arbol binario

struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int value) : data(value), left(nullptr), right(nullptr) {}
};

Node *buscar(Node *root, int key)
{
    if (root == nullptr || root->data == key)
    {
        return root;
    }
}

// interpolacion
// hasing