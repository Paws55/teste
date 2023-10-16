#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<float> notas(4);
    float media = 0;
    float media_ponderada = 0;

    for (int i = 0; i < notas.size(); i++) {
        cout << "Inserir a nota " << i + 1 << ": ";
        cin >> notas[i];
        media += notas[i];
    }

    media /= notas.size();

    media_ponderada = (notas[0] * 0.5) + (notas[1] * 0.1) + (notas[2] * 0.1) + (notas[3] * 0.3);

    cout << "Notas inseridas: ";
    for (int i = 0; i < notas.size(); i++) {
        cout << notas[i] << " ";
    }
    cout << endl;

    cout << "Média == " << media << endl;
    cout << "Média ponderada == " << media_ponderada;

    return 0;
}

