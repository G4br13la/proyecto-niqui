#include <iostream>
#include <string>
#include <__iterator/reverse_iterator.h>

using namespace std;

// ordenamiento de arrays

void ordenaineto_burbuja(int arr[], int n)
// ordenar el vector
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            int temporal = arr[j]; // guarda la primera pocicion
            arr[j] = arr[j + 1];   // remplaza el dato al nuevo
            arr[j + 1] = temporal;
        }
    }
}

void vector_ordenado(int arr[], int tamanio)
{
    // recorer el vector
    for (int i = 0; i < tamanio; i++)
    {
        cout << arr[i] << " ";
        cout << endl;
    }
}

int main()
{
    int arr[] = {110, 22, 31, 14, 55, 6, 75, 280, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "vector original es: " << endl;
    vector_ordenado(arr, n);
    ordenaineto_burbuja(arr, n);
    cout << "vector ordenado es: " << endl;
    vector_ordenado(arr, n);
}

// ordenamientos de listas

struct Node
{
    int data;
    Node *next; // trae la direccion
    Node(int val) : data(val), next(nullptr) {}
};
// funcion para instertar un nodo al inicio de la lista
void insertariniciolist(Node *&head, int val)
{
    Node *nuevoNode = new Node(val);
    nuevoNode->next = head;
    head = nuevoNode;
}
// function para imprimir la lista

void imprimirlista(Node *head)
{
    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
// funcion para ordenar lista

void orde_list(Node *&head)
{
    if (head == nullptr || head->next == nullptr)
    {
        return;
        Node *sorder = nullptr; // nuevo nodo oredenado
        Node *current = head;   // nodo actual se le asigna la nueva funcion
    }

    while (current != nullptr)
    {
        Node *nextNode = current->next;
        if (sorted == nullptr || sorted->data >= current->data)
        {
            current->next = sorted;
            sorted = current;
        }
        else
        {
            Node *temp = sorted;
            while (temp->next && temp->next->data < current->data)
            {
                temp = temp->next;
            }
            current->next = temp->next;
        }
        current = nextNode;
    }
    head = sorted;
}

int main()
{
    Node *head = nullptr;
    insertariniciolist(head, 50);
    insertariniciolist(head, 160);
    insertariniciolist(head, 5);
    insertariniciolist(head, 1);

    cout << "lista original es: " << endl;
    imprimirlista(head);
    orde_list(head);

    cout << "lista ordenada es: " << endl;
    imprimirlista(head);
    return 0;
}