#include <iostream>
using namespace std;

int main() {
    unsigned short int estadoLEDs = 0b00000000; // Todos os LEDs desligados

    // Ligar o LED na posição 2 (contando a partir de 0)
    estadoLEDs |= (1 << 2); // Resultado: 0b00000100 (LED 2 ligado)
cout<<estadoLEDs<<endl;
    // Desligar o LED na posição 2
    estadoLEDs &= ~(1 << 2); // Resultado: 0b00000000 (LED 2 desligado)
cout<<estadoLEDs<<endl;
    // Alternar o LED na posição 3
    estadoLEDs ^= (1 << 3); // Resultado: 0b00001000 (LED 3 alternado)
cout<<estadoLEDs<<endl;
    // Verificar se o LED na posição 3 está ligado
    if (estadoLEDs & (1 << 3)) {
        cout << "LED 3 está LIGADO" << endl;
    } else {
        cout << "LED 3 está DESLIGADO" << endl;
    }

    return 0;
}
