#include <iostream>

using namespace std;

int main (){
    double notas[4], media;

    for(int i = 0; i < 4; i++){
        cout << "Digite a" << i << "ª nota: " << endl;
        cin >> notas[i];
        media += notas[i];
    }

    media = media / 4;

    cout << "A media e: " << media << endl;

    return 0;
}