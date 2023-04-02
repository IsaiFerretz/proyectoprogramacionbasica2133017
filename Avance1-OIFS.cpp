#include <iostream>
using namespace std;

int main()
{
    int opcion, desicion1;
    char item[20], articulo[20], desc[100], genero[20], clasif[20], consola[10];
    float precio, impuesto, total;
    cout << "\t ***MENU DE OPCIONES***" << endl;
    cout << "1.- Alta de Articulos" << endl;
    cout << "2.- Modificacion de articulos" << endl;
    cout << "3.- Baja de articulos" << endl;
    cout << "4.- Lista de articulos" << endl;
    cout << "5.- Limpiar Pantalla" << endl;
    cout << "6.- Salir" << endl;
    cin >> opcion;

    switch (opcion)
    {
    case 1:
        cout << "Numero de Item" << endl;
        cin >> item;
        cout << "Nombre del articulo" << endl;
        cin >> articulo;
        cout << "Descripcion" << endl;
        cin >> desc;
        cout << "Genero" << endl;
        cin >> genero;
        cout << "Clasificacion del videojuego" << endl;
        cin >> clasif;
        cout << "Tipo de consola" << endl;
        cin >> consola;
        cout << "Precio" << endl;
        cin >> precio;
        impuesto = precio * (0.16);
        total = impuesto + precio;
        cout << "TOTAL: $" << total<<endl;
        cout << "Regresar al menu: 1.- SI   2.- NO" << endl;
        cin >> desicion1;
        if (desicion1 == 1)
        {
            return main();
        }
        break;

    case 2:
            break;
            
    case 3:
        break;

    case 4:
        break;

    case 5:
        system("cls");
        return main();
        break;

    case 6:
        exit(1);
        break;
    }
}