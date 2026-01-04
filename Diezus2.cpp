#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;

vector<string> frases_De_Salida = {
    "Quieres seguir hablando sobre esto? O prefieres escuchar mis chistes malos?",
};


string frase_Aleatoria() {
    srand(time(nullptr));
    int indice = rand() % frases_De_Salida.size();
    return frases_De_Salida[indice];
}

int main() {
    cout << "" << frase_Aleatoria() << endl;
    return 0;
}