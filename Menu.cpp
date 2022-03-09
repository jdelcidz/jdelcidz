//Programa de MENU

#include <iostream>
#include <stdlib.h>

using namespace std;

int main (int argc, char** argv) {
    int opcion = 0;
    
    while (true){
        system ("cls");
        cout << "********" << endl;
        cout << "**MENU**" << endl;
        cout << "********" << endl;
        
        cout << endl;
        cout << "1  - Cafe y Granitas" << endl;
        cout << "2  - Reposteria" << endl;
        cout << "0  - Salir" << endl;
        
        cout << "Ingrese una opcion del MENU:  ";
        cin >> opcion;
        
        if (opcion == 0){
            break;
        }
        
        
        switch (opcion){
                case 1: {
                    system ("cls");
                    cout << " ESTAS EN EL MENU DE CAFE Y GRANITAS" << endl;
                    system ("pause");
                    break;
                }        
        
                case 2: {
                    system ("cls");
                    cout << " ESTAS EN EL MENU REPOSTERIA" << endl;
                    system ("pause");
                    break;
                }
            default:
                {
                    cout << " Ingrese una opcion valida (0, 1, 2)" << endl;
                    system ("pause");
                    break;
                }
            }
        }
    cout << endl;
}