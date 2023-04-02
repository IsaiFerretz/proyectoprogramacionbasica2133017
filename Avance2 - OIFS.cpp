#include <iostream>
#include <math.h> 
#include <conio.h> 
#include <stdio.h>
#include <string.h>
#include <string>
#include <wchar.h>
using  namespace std;

struct tienda
{
    int item;
    char articulo[20], genero[20], clasif[20], consola[10];
    string desc;
    float precio, total,impuesto;
};

int main()
{
    tienda articulos[3];
    int opcion, desicion1 = 0;
    do
    {
        cout << "\t ***MENU DE OPCIONES***" << endl;
        cout << "1.- Alta" << endl;
        cout << "2.- Modificacion" << endl;
        cout << "3 - Baja" << endl;
        cout << "4.- Lista" << endl;
        cout << "5.- Limpiar Pantalla" << endl;
        cout << "6.- Salir" << endl;
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            for (int i = 0; i < 2; i++)
            {
                printf("Ingrese el Item del articulo \n");
                scanf_s("%d", &articulos[i].item);
                cin.ignore();
                printf("Ingrese el nombre del articulo \n");
                gets_s(articulos[i].articulo);
                printf("Ingrese la descripcion \n");
                getline(cin, articulos[i].desc);
                printf("Ingrese el genero \n");
                gets_s(articulos[i].genero);
                printf("Ingrese la clasificacion \n");
                gets_s(articulos[i].clasif);
                printf("Ingrese el tipo de cosola \n");
                gets_s(articulos[i].consola);
                printf("Ingrese el precio \n");
                scanf_s("%f", &articulos[i].precio);


            }
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            for (int i = 0; i < 2;i++)
            {
                printf("ITEM: %d \n", articulos[i].item);
                printf("NOMBRE: %s \n", articulos[i].articulo);
                printf("DESCRIPCION: %s \n", articulos[i].desc.c_str());
                printf("GENERO: %s \n", articulos[i].genero);
                printf("CLASIFICACION: %s \n", articulos[i].clasif);
                printf("CONSOLA: %s \n", articulos[i].consola);
                printf("PRECIO: %f \n", articulos[i].precio);
                articulos[i].impuesto = articulos[i].precio * (0.16);
                articulos[i].total = articulos[i].impuesto + articulos[i].precio;
                printf("TOTAL: $%f", articulos[i].total);
                system("pause");
            }
            
        case 5:
            system("cls");
            return main();
            break;
        case 6:
            exit(1);
            break;

        }



    } while (opcion != 6);
    system("pause");
}