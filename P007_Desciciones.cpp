#include <iostream>
using namespace std;

int main() {
    int peleadores, tipo, batallas = 0;

    // Solicitar el número de peleadores
    cout << "Ingrese el número de peleadores: ";
    cin >> peleadores;

    // Verificar que el número de peleadores sea mayor que 1
    if (peleadores < 2) {
        cout << "Se requieren al menos 2 peleadores." << endl;
        return 1;
    }

    // Solicitar el tipo de combate
    cout << "Seleccione el sistema de combate:" << endl;
    cout << "1. Royal Rumble" << endl;
    cout << "2. Eliminatoria directa" << endl;
    cout << "3. Grupos, semifinal y final" << endl;
    cin >> tipo;

    // Calcular el número de batallas según el tipo de combate
    if (tipo == 1) {
        // Royal Rumble
        batallas = peleadores - 1;
    } else if (tipo == 2) {
        // Eliminatoria directa
        batallas = peleadores - 1;
    } else if (tipo == 3) {
        // Grupos, semifinal y final
        int grupos = peleadores / 4; // Suponemos 4 peleadores por grupo
        int batallasGrupo = grupos * 3; // 3 batallas por grupo
        int semifinales = grupos / 2; // Los ganadores pasan a semifinales
        int batallasSemifinal = semifinales; // 1 batalla por semifinal
        int final = 1; // 1 batalla final

        batallas = batallasGrupo + batallasSemifinal + final;
    } else {
        cout << "Tipo de combate no válido." << endl;
        return 1;
    }

    // Mostrar el resultado
    cout << "El número de batallas necesarias es: " << batallas << endl;

    return 0;
}

