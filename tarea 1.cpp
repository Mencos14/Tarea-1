# include <iostream>
using namespace std;
int main()
{
    char letra;
    // solicitar al usuario que ingrese la letra
    cout << "ingresar una letra: ";
    cin >> letra;

    // Determinar el color basado en la letra asignada y mostrarlo
    switch (letra){
        case 'r':
        cout << " El color correspondido a la letra " << letra << " es rojo " << endl;
        break;

        case 'y':
        cout << "El color correspondido a la letra " << letra << " es amarillo " << endl;
        break;
 
        case 'b':
        cout << "El color correspondido a la letra " << letra << " es azul " << endl;
        break;

        case 'w':
        cout << "El color coprrespondido a la letra " << letra << " es blanco " << endl;
        break;

        case 'k':
        cout << "El color correspondido a la letra " << letra << " es negro " << endl;
        break;

        case 'c':
        cout << "El color correspondido a la letra " << letra << " es cion " << endl;
        break;

        case 'g':
        cout << "El color correspondido a la letra " << letra << " es verde " << endl;
        break;

        default:
        cout << "No hay un color asociado a la letra " << letra << endl;
        break;

        return 0;
    

    }

    
    
    

}
    





    







