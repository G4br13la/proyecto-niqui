/*listas enlazadas

hacer listya de reproduccion de spotify

1) definir la estructura jodo de la lista en lasada*/

#include <iostream>
#include <string>

using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int val) : data(val), next(nullptr){};
};

// crear la funcion que permite insertar

void insertarinicio(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
};

// funcion que muetre la lista

void imprimirlista(Node *head)
{
    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    Node *head = nullptr;
    insertarinicio(head, 3);
    insertarinicio(head, 4);
    insertarinicio(head, 5);

    cout << "lista tatiana: " << endl;
    imprimirlista(head);
}

/*ordenamiento de arrays, ordenamientos de listas*/