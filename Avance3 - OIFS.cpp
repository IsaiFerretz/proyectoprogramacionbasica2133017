#include <iostream> // funciones de entrada/salida estándar, como cout y cin, para mostrar y recibir datos desde la consola.
#include <string> //Proporciona la clase string y varias funciones y operaciones relacionadas con manipulación de cadenas de texto.
#include <fstream> //Proporciona las clases ofstream y ifstream para escribir y leer archivos de texto, respectivamente.
#include <vector> //almacena y manipula dinámicamente una secuencia de elementos.
#include <conio.h> //limitadas funciones relacionadas con la entrada/salida de caracteres en la consola.
#include<stdlib.h>// funcione new y delete
#include <windows.h> //colores

using namespace std;

struct TIENDA
{
    int item,fecha;
    string articulo, estatus, desc;
    string consola;
    string genero, clasif, carac;
    float precio, total, impuesto;
};

int alta;
TIENDA* registro;

void Alta();
void listas();
void baja();
void modificacion();
void archivos();

int main()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    int opcion;
    printf("\n");
    SetConsoleTextAttribute(hConsole, 02);
    printf("\t%c %c %c %c", 178, 177, 178, 177);
    SetConsoleTextAttribute(hConsole, 7);
    printf(" MEXICAN VIDEOGAMES ");
    SetConsoleTextAttribute(hConsole, 04);
    printf("% c % c % c % c \n",177,178,177,178);
    SetConsoleTextAttribute(hConsole, 0+8);
    printf("\t   %c%c%c   MEN%c DE OPCIONES   %c%c%c\n",254,254,254,233,254,254,254);
    SetConsoleTextAttribute(hConsole, 03);
    printf("1.- Alta\n");
    printf("2.- Modificaci%cn\n",162);
    printf("3 - Dar de Baja\n");
    printf("4.- Lista\n");
    printf("5.- Limpiar Pantalla\n");
    printf("6.- Salir\n");
    SetConsoleTextAttribute(hConsole, 0 + 8);
    printf("OPCI%cN: ",224);
    SetConsoleTextAttribute(hConsole, 7);
    cin >> opcion;

    switch (opcion)
    {
    case 1:
        Alta();
        return main();
        break;

    case 2:
        modificacion();
        return main();
        break;

    case 3:
        baja();
        return main();
        break;

    case 4:
        listas();
        return main();
        break;

    case 5:
        system("cls");
        return main();
        break;

    case 6:
        archivos();
        break;
    }
}

void Alta()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 0 + 14);
    printf("N%cmero de registros que desea dar de alta: ",163);
    SetConsoleTextAttribute(hConsole, 7);
    scanf_s("%d", &alta);
    registro = new TIENDA[alta];

    for (int i = 0; i < alta; i++)
    {
        SetConsoleTextAttribute(hConsole, 0 + 11);
        printf("Ingrese el Item del art%cculo: \n",161);
        SetConsoleTextAttribute(hConsole, 7);
        scanf_s("%d", &registro[i].item);
        cin.ignore();
        SetConsoleTextAttribute(hConsole, 0 + 11);
        printf("Ingrese el nombre del art%cculo: \n",161);
        SetConsoleTextAttribute(hConsole, 7);
        getline(cin, registro[i].articulo);
        SetConsoleTextAttribute(hConsole, 0 + 11);
        printf("Ingrese el a%co de lanzamiento: \n", 164);
        SetConsoleTextAttribute(hConsole, 7);
        scanf_s("%d", &registro[i].fecha);
        cin.ignore();
        SetConsoleTextAttribute(hConsole, 0 + 11);
        printf("Ingrese la descripci%cn: \n",162);
        SetConsoleTextAttribute(hConsole, 7);
        getline(cin, registro[i].desc);
        SetConsoleTextAttribute(hConsole, 0 + 11);
        printf("Ingrese la caracter%csticas: \n", 161);
        SetConsoleTextAttribute(hConsole, 7);
        getline(cin, registro[i].carac);
        SetConsoleTextAttribute(hConsole, 0 + 11);
        printf("Ingrese el g%cnero: \n",130);
        SetConsoleTextAttribute(hConsole, 7);
        getline(cin, registro[i].genero);
        SetConsoleTextAttribute(hConsole, 0 + 11);
        printf("Ingrese la clasificaci%cn: \n",162);
        SetConsoleTextAttribute(hConsole, 7);
        getline(cin, registro[i].clasif);
        SetConsoleTextAttribute(hConsole, 0 + 11);
        printf("Ingrese el tipo de consola: \n");
        SetConsoleTextAttribute(hConsole, 7);
        getline(cin, registro[i].consola);
        SetConsoleTextAttribute(hConsole, 0 + 11);
        printf("Ingrese el precio: \n");
        SetConsoleTextAttribute(hConsole, 7);
        scanf_s("%f", &registro[i].precio);
        cin.ignore();
    }
}
void listas()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    for (int i = 0; i < alta; i++)
    {
        //if (matricula[i] == 0)
        if (registro[i].estatus == "ELIMINADO")
        {
            SetConsoleTextAttribute(hConsole, 0 + 12);
            cout << "REGISTRO " << i + 1 << " ELIMINADO" << endl;
        }
        else
        {
            SetConsoleTextAttribute(hConsole, 0 + 11);
            cout << "Registro " << i + 1 << endl;
            
            SetConsoleTextAttribute(hConsole, 0 + 9);
            cout << "ITEM: ";
            SetConsoleTextAttribute(hConsole, 7);
            cout << registro[i].item << endl;
            SetConsoleTextAttribute(hConsole, 0 + 9);
            cout << "NOMBRE: ";
            SetConsoleTextAttribute(hConsole, 7);
            cout << registro[i].articulo << endl;
            SetConsoleTextAttribute(hConsole, 0 + 9);
            printf("A%cO: ",165);
            SetConsoleTextAttribute(hConsole, 7);
            cout << registro[i].fecha << endl;
            SetConsoleTextAttribute(hConsole, 0 + 9);
            printf("DESCRIPCI%cN: ",224);
            SetConsoleTextAttribute(hConsole, 7);
            cout<< registro[i].desc << endl;
            SetConsoleTextAttribute(hConsole, 0 + 9);
            printf("CARACTER%cSTICAS: ",161);
            SetConsoleTextAttribute(hConsole, 7);
            cout << registro[i].carac << endl;
            SetConsoleTextAttribute(hConsole, 0 + 9);
            printf("G%cNERO: ",144);
            SetConsoleTextAttribute(hConsole, 7);
            cout << registro[i].genero << endl;
            SetConsoleTextAttribute(hConsole, 0 + 9);
            printf("CLASIFICACI%cN: ",224);
            SetConsoleTextAttribute(hConsole, 7);
            cout<< registro[i].clasif << endl;
            SetConsoleTextAttribute(hConsole, 0 + 9);
            cout << "CONSOLA: ";
            SetConsoleTextAttribute(hConsole, 7);
            cout<< registro[i].consola << endl;
            SetConsoleTextAttribute(hConsole, 0 + 9);
            cout << "PRECIO: ";
            SetConsoleTextAttribute(hConsole, 7);
            cout<<"$" << registro[i].precio << endl;
            SetConsoleTextAttribute(hConsole, 0 + 9);
            cout << "TOTAL: ";
            registro[i].impuesto = registro[i].precio * 0.16;
            registro[i].total = registro[i].impuesto + registro[i].precio;
            SetConsoleTextAttribute(hConsole, 7);
            cout <<"$" << registro[i].total << endl;

        }
    }
}
void baja()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    int j;
    SetConsoleTextAttribute(hConsole, 0 + 14);
    printf("Ingrese el registro a eliminar: ");
    SetConsoleTextAttribute(hConsole, 7);
    scanf_s("%d", &j);

    j = j - 1;
    for (int i = 0; i <= j; i++)
    {
        SetConsoleTextAttribute(hConsole, 0 + 12);
        printf("Eliminando registro %d\n", j + 1);
        registro[i].estatus = "ELIMINADO";
    }
}
void modificacion()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    int m = 0, opcion1 = 0, opcion2 = 0;
    do
    {
        SetConsoleTextAttribute(hConsole, 0 + 14);
        printf ("Ingrese el n%cmero de registro a modificar: ",163);
        SetConsoleTextAttribute(hConsole, 7);
        cin >> m;
        m = m - 1; // Esto debido a que i inicia en 0

        for (int i = m; i == m; i++)
        {
            if ((registro[i].estatus == "ELIMINADO"))
            {
                SetConsoleTextAttribute(hConsole, 0 + 12);
                cout << "REGISTRO ELIMINADO " << i + 1 << endl;
                printf("Ingrese un registro v%clido\n", 160);
                opcion2 = 1;
            }
            else
            {
                opcion2 = 2;
            }
        }
    } while (opcion2 == 1);

    SetConsoleTextAttribute(hConsole, 06);
    printf("%cQu%c desea modificar?\n",168,130);
    SetConsoleTextAttribute(hConsole, 0 + 13);
    printf("1.- Item \n");
    printf("2.- Art%cculo\n",161);
    printf("3.- A%co\n", 164);
    printf("4.- Descripci%cn\n",162);
    printf("5.- Caracter%csticas\n", 161);
    printf("6.- G%cnero\n",130);
    printf("7.- Clasificaci%cn\n",162);
    printf("8.- Consola\n");
    printf("9.- Precio\n");
    SetConsoleTextAttribute(hConsole, 0 + 14);
    printf("Ingrese la opci%cn a modificar: ",162);
    SetConsoleTextAttribute(hConsole, 7);
    cin >> opcion1;
    cin.ignore();  // Limpiar el búfer de entrada

    switch (opcion1)
    {
    case 1:
        for (int i = m; i == m; i++)
        {
            SetConsoleTextAttribute(hConsole, 05);
            printf("Ingrese el Item:  ");
            SetConsoleTextAttribute(hConsole, 7);
            cin >> registro[i].item;
            cin.ignore();
        }
        break;
    case 2:
        for (int i = m; i == m; i++)
        {
            SetConsoleTextAttribute(hConsole, 05);
            printf("Ingrese el nombre del art%cculo:  ",161);
            SetConsoleTextAttribute(hConsole, 7);
            getline(cin, registro[i].articulo);
        }
        break;
    case 3:
        for (int i = m; i == m; i++)
        {
            SetConsoleTextAttribute(hConsole, 05);
            printf("Ingrese el A%co:  ",164);
            SetConsoleTextAttribute(hConsole, 7);
            cin >> registro[i].fecha;
            cin.ignore();
        }
        break;
    case 4:
        for (int i = m; i == m; i++)
        {
            SetConsoleTextAttribute(hConsole, 05);
            printf("Ingrese la descripci%cn:  ", 162);
            SetConsoleTextAttribute(hConsole, 7);
            getline(cin, registro[i].desc);
        }
        break;
    case 5:
        for (int i = m; i == m; i++)
        {
            SetConsoleTextAttribute(hConsole, 05);
            printf("Ingrese las caracter%csticas:  ", 161);
            SetConsoleTextAttribute(hConsole, 7);
            getline(cin, registro[i].desc);
        }
        break;
    case 6:
        for (int i = m; i == m; i++)
        {
            SetConsoleTextAttribute(hConsole, 05);
            printf("Ingrese el g%cnero:  ", 130);
            SetConsoleTextAttribute(hConsole, 7);
            getline(cin, registro[i].genero);
        }
        break;
    case 7:
        for (int i = m; i == m; i++)
        {
            SetConsoleTextAttribute(hConsole, 05);
            printf("Ingrese la clasificaci%cn:  ", 162);
            SetConsoleTextAttribute(hConsole, 7);
            getline(cin, registro[i].clasif);
        }
        break;
    case 8:
        for (int i = m; i == m; i++)
        {
            SetConsoleTextAttribute(hConsole, 05);
            printf("Ingrese la consola:  ");
            SetConsoleTextAttribute(hConsole, 7);
            getline(cin, registro[i].consola);
        }
        break;
    case 9:
        for (int i = m; i == m; i++)
        {
            SetConsoleTextAttribute(hConsole, 05);
            printf("Ingrese el precio:  ");
            SetConsoleTextAttribute(hConsole, 7);
            cin >> registro[i].precio;
            cin.ignore();

        }
        break;
    }
}

void archivos()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    ofstream archivo; //clase ifstream para leer archivos
    string nombrearchivo;
    int texto;
    string texto2;
    float texto3 = 0;

    nombrearchivo = "DATOS FINALES.txt";

    archivo.open(nombrearchivo.c_str(), ios::out);

    if (archivo.fail())
    {
        SetConsoleTextAttribute(hConsole, 04);
        cout << "ERROR NO SE PUDO CREAR EL ARCHIVO";
        exit(1);
    }
    SetConsoleTextAttribute(hConsole, 7);

    archivo << "ITEM" << "\t" << "\t";
    archivo << "ARTICULO" << "\t";
    archivo << "LANZAMIENTO" << "\t";
    archivo << "GENERO" << "\t" << "\t";
    archivo << "CONSOLA" << "\t" << "\t";
    archivo << "PRECIO" << "\t" << "\t";
    archivo << "TOTAL" << "\n";

    for (int i = 0; i < alta; i++)
    {
        if (registro[i].estatus == "ELIMINADO")
        {
            texto2 = "REGISTRO ELIMINADO ";
            texto = i;
            archivo << texto2 << texto << "\n";
        }
        else
        {
            texto = registro[i].item;
            archivo << texto << "\t" << "\t";
            texto2 = registro[i].articulo;
            archivo << texto2 << "\t" << "\t";
            texto = registro[i].fecha;
            archivo << texto << "\t" << "\t";
            texto2 = registro[i].genero;
            archivo << texto2 << "\t " << "\t";
            texto2 = registro[i].consola;
            archivo << texto2 << "\t " << "\t";
            texto3 = registro[i].precio;
            archivo << texto3 << "\t " << "\t";
            texto3 = registro[i].total;
            archivo << texto3 << "\t " << "\t";
        }
    }


    archivo.close();
}
