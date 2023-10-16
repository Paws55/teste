#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<float> notas(4);
    float media = 0;

    for (int i = 0; i < notas.size(); i++) {
        cout << "Insira a nota " << i + 1 << ": ";
        cin >> notas[i];
        media += notas[i];
    }

    media /= notas.size();

    cout << "Notas inseridas: ";
    for (int i = 0; i < notas.size(); i++) {
        cout << notas[i] << " ";
    }
    cout << endl;

    cout << "Média das notas == " << media;

    return 0;
}

