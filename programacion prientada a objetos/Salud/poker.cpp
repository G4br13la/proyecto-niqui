#include <iostream>
#include <string>

using namespace std;

// poker de arrey

void ordenaineto_burbuja(vector<int> &cartas)
// ordenar el vector
{
    int n = cartas.size();
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = 0; j < n - i - 1; ++j)
        {
            if (cartas[j] > cartas[j + 1])
            {
                int temp = cartas[j];
                cartas[j] = cartas[j + 1];
                cartas[j + 1] = temp;
            }
        }
    }
}

void vector_ordenado_poker(vector<int> &cartas)
{
    for (int i = 0; i < cartas.size(); ++i)
    {
        cout << cartas[i] << " ";
        cout << endl;
    }
}

int main()
{
    vector<int> hand = {4, 2, 7, 11, 5};
    ordenaineto_burbuja(hand);

    return 0;
}