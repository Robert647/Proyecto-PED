/*Crear un programa que simule un censo, que permita realizar consultas por cada departamento
de El Salvador, por número de DUI.Finalmente el programa debe implementar lo siguiente :
1.  Agregar registros : departamento, municipio, DUI, nombre, fecha de nacimiento, sexo, entre otros
2.  Eliminar un registro
3.  Buscar por departamento(Mostrar número de habitantes total, número de mujeres, hombre, niños y niñas)*/

#include<iostream>
#include<string.h>
#include<string>
#include<stdlib.h>
#include<conio.h>

using namespace std;

struct Nodo {
	string departamento;
	string municipio;
	int DUI;
	string nombre;
	int fechaNac;
	string sexo;
	Nodo* siguiente;
};

int main();

void InsertarInfo(Nodo*&, string, string, int, string, int, string);
void buscar(Nodo*, int);
void BuscarPorDepartamento(Nodo*&, int, string);
void eliminar(Nodo*&, int);
void menu();
void menuMunicipios();
void mostrarInfoDepartamento();

Nodo* lista = NULL;

string departamentos[14] = { "Ahuachapan","Sonsonate","Santa Ana","Chalatenango", "La liberta","Cuscatlan","San Salvador","La paz","Cabanas","San vicente","Uzulutan","San miguel","Morazan","la union" };

int main() {
	menu();
	return 0;
}

void menu() {
	int opcion, dui;
	do {
		cout << "==============MENU DE OPCIONES=================" << endl;
		cout << "1 - Aniadir nueva persona a lista. " << endl;
		cout << "2 - Eliminar registro de una persona. " << endl;
		cout << "3 - Buscar por medio de DUI. " << endl;
		cout << "4 - Mostrar datos por departamento. " << endl;
		cout << "5 - Buscar por departamento." << endl;
		cout << "6 - Salir." << endl;
		cout << "===============================================" << endl;
		cout << "Ingrese su opcion: ";
		cin >> opcion;

		switch (opcion)
		{
		case 1:
			menuMunicipios();
			break;
		case 2:
			cout << "Ingrese el numero de DUI: ";
			cin >> dui;
			eliminar(lista, dui);
			break;
		case 3:
			cout << "Ingrese el numero de DUI: ";
			cin >> dui;
			buscar(lista, dui);
			break;
		case 4:
			mostrarInfoDepartamento();
		case 5:
			string departament;
			cout << "Ingrese el dui: "; cin >> dui; cout << endl;
			cout << "Ingrese el departamento: "; cin >> departament; cout << endl;
			BuscarPorDepartamento(lista, dui, departament);
			break;
		default:
			break;
		}

	} while (opcion != 6);

}

void menuMunicipios()
{
	string mnc, nom, aux, departamento;
	int dept, dui, fnac;
	string sex;

	cout << "================DEPARTAMENTOS===================" << endl;
	cout << "1  - Ahuachapan" << endl;
	cout << "2  - Cabanias" << endl;
	cout << "3  - Chalatenango" << endl;
	cout << "4  - Cuscatlan " << endl;
	cout << "5  - La Libertad" << endl;
	cout << "6  - Morazan " << endl;
	cout << "7  - La Paz " << endl;
	cout << "8  - Santa Ana " << endl;
	cout << "9  - San Miguel " << endl;
	cout << "10 - San Salvador " << endl;
	cout << "11 - San Vicente " << endl;
	cout << "12 - Sonsonate " << endl;
	cout << "13 - La Union " << endl;
	cout << "14 - Usultan " << endl;
	cout << "15 - Salir." << endl;
	cout << "===============================================" << endl;
	cout << "Ingrese su opcion: ";
	cin >> dept;

	switch (dept)
	{
	case 1:
		departamento = "Ahuachapan";
		getline(cin, aux);
		cout << "Ingrese su municipio: ";
		getline(cin, mnc);
		cout << "Digite su DUI:";
		cin >> dui;
		getline(cin, aux);
		cout << "Ingrese su nombre: ";
		getline(cin, nom);
		cout << "Anio de nacimiento: ";
		cin >> fnac;
		getline(cin, aux);
		cout << "Escriba su sexo M o F: ";
		getline(cin, sex);
		cout << endl;
		InsertarInfo(lista, departamento, mnc, dui, nom, fnac, sex);
		break;
	case 2:
		departamento = "Cabanias";
		getline(cin, aux);
		cout << "Ingrese su municipio: ";
		getline(cin, mnc);
		cout << "Digite su DUI:";
		cin >> dui;
		getline(cin, aux);
		cout << "Ingrese su nombre: ";
		getline(cin, nom);
		cout << "Anio de nacimiento: ";
		cin >> fnac;
		getline(cin, aux);
		cout << "Escriba su sexo M o F: ";
		getline(cin, sex);
		cout << endl;
		InsertarInfo(lista, departamento, mnc, dui, nom, fnac, sex);
		break;
	case 3:
		departamento = "Chalatenango";
		getline(cin, aux);
		cout << "Ingrese su municipio: ";
		getline(cin, mnc);
		cout << "Digite su DUI:";
		cin >> dui;
		getline(cin, aux);
		cout << "Ingrese su nombre: ";
		getline(cin, nom);
		cout << "Anio de nacimiento: ";
		cin >> fnac;
		getline(cin, aux);
		cout << "Escriba su sexo M o F: ";
		getline(cin, sex);
		cout << endl;
		InsertarInfo(lista, departamento, mnc, dui, nom, fnac, sex);
		break;
	case 4:
		departamento = "Cuscatlan";
		getline(cin, aux);
		cout << "Ingrese su municipio: ";
		getline(cin, mnc);
		cout << "Digite su DUI:";
		cin >> dui;
		getline(cin, aux);
		cout << "Ingrese su nombre: ";
		getline(cin, nom);
		cout << "Anio de nacimiento: ";
		cin >> fnac;
		getline(cin, aux);
		cout << "Escriba su sexo M o F: ";
		getline(cin, sex);
		cout << endl;
		InsertarInfo(lista, departamento, mnc, dui, nom, fnac, sex);
		break;
	case 5:
		departamento = "La Libertad";
		getline(cin, aux);
		cout << "Ingrese su municipio: ";
		getline(cin, mnc);
		cout << "Digite su DUI:";
		cin >> dui;
		getline(cin, aux);
		cout << "Ingrese su nombre: ";
		getline(cin, nom);
		cout << "Anio de nacimiento: ";
		cin >> fnac;
		getline(cin, aux);
		cout << "Escriba su sexo M o F: ";
		getline(cin, sex);
		cout << endl;
		InsertarInfo(lista, departamento, mnc, dui, nom, fnac, sex);
		break;
	case 6:
		departamento = "Morazan";
		getline(cin, aux);
		cout << "Ingrese su municipio: ";
		getline(cin, mnc);
		cout << "Digite su DUI:";
		cin >> dui;
		getline(cin, aux);
		cout << "Ingrese su nombre: ";
		getline(cin, nom);
		cout << "Anio de nacimiento: ";
		cin >> fnac;
		getline(cin, aux);
		cout << "Escriba su sexo M o F: ";
		getline(cin, sex);
		cout << endl;
		InsertarInfo(lista, departamento, mnc, dui, nom, fnac, sex);
		break;
	case 7:
		departamento = "La Paz";
		getline(cin, aux);
		cout << "Ingrese su municipio: ";
		getline(cin, mnc);
		cout << "Digite su DUI:";
		cin >> dui;
		getline(cin, aux);
		cout << "Ingrese su nombre: ";
		getline(cin, nom);
		cout << "Anio de nacimiento: ";
		cin >> fnac;
		getline(cin, aux);
		cout << "Escriba su sexo M o F: ";
		getline(cin, sex);
		cout << endl;
		InsertarInfo(lista, departamento, mnc, dui, nom, fnac, sex);
		break;
	case 8:
		departamento = "Santa Ana";
		getline(cin, aux);
		cout << "Ingrese su municipio: ";
		getline(cin, mnc);
		cout << "Digite su DUI:";
		cin >> dui;
		getline(cin, aux);
		cout << "Ingrese su nombre: ";
		getline(cin, nom);
		cout << "Anio de nacimiento: ";
		cin >> fnac;
		getline(cin, aux);
		cout << "Escriba su sexo M o F: ";
		getline(cin, sex);
		cout << endl;
		InsertarInfo(lista, departamento, mnc, dui, nom, fnac, sex);
		break;
	case 9:
		departamento = "San Miguel";
		getline(cin, aux);
		cout << "Ingrese su municipio: ";
		getline(cin, mnc);
		cout << "Digite su DUI:";
		cin >> dui;
		getline(cin, aux);
		cout << "Ingrese su nombre: ";
		getline(cin, nom);
		cout << "Anio de nacimiento: ";
		cin >> fnac;
		getline(cin, aux);
		cout << "Escriba su sexo M o F: ";
		getline(cin, sex);
		cout << endl;
		InsertarInfo(lista, departamento, mnc, dui, nom, fnac, sex);
		break;
	case 10:
		departamento = "San Salvador";
		getline(cin, aux);
		cout << "Ingrese su municipio: ";
		getline(cin, mnc);
		cout << "Digite su DUI:";
		cin >> dui;
		getline(cin, aux);
		cout << "Ingrese su nombre: ";
		getline(cin, nom);
		cout << "Anio de nacimiento: ";
		cin >> fnac;
		getline(cin, aux);
		cout << "Escriba su sexo M o F: ";
		getline(cin, sex);
		cout << endl;
		InsertarInfo(lista, departamento, mnc, dui, nom, fnac, sex);
		break;
	case 11:
		departamento = "San Vicente";
		getline(cin, aux);
		cout << "Ingrese su municipio: ";
		getline(cin, mnc);
		cout << "Digite su DUI:";
		cin >> dui;
		getline(cin, aux);
		cout << "Ingrese su nombre: ";
		getline(cin, nom);
		cout << "Anio de nacimiento: ";
		cin >> fnac;
		getline(cin, aux);
		cout << "Escriba su sexo M o F: ";
		getline(cin, sex);
		cout << endl;
		InsertarInfo(lista, departamento, mnc, dui, nom, fnac, sex);
		break;
	case 12:
		departamento = "Sonsonate";
		getline(cin, aux);
		cout << "Ingrese su municipio: ";
		getline(cin, mnc);
		cout << "Digite su DUI:";
		cin >> dui;
		getline(cin, aux);
		cout << "Ingrese su nombre: ";
		getline(cin, nom);
		cout << "Anio de nacimiento: ";
		cin >> fnac;
		getline(cin, aux);
		cout << "Escriba su sexo M o F: ";
		getline(cin, sex);
		cout << endl;
		InsertarInfo(lista, departamento, mnc, dui, nom, fnac, sex);
		break;
	case 13:
		departamento = "La Union";
		getline(cin, aux);
		cout << "Ingrese su municipio: ";
		getline(cin, mnc);
		cout << "Digite su DUI:";
		cin >> dui;
		getline(cin, aux);
		cout << "Ingrese su nombre: ";
		getline(cin, nom);
		cout << "Anio de nacimiento: ";
		cin >> fnac;
		getline(cin, aux);
		cout << "Escriba su sexo M o F: ";
		getline(cin, sex);
		cout << endl;
		InsertarInfo(lista, departamento, mnc, dui, nom, fnac, sex);
		break;
	case 14:
		departamento = "Usulutan";
		getline(cin, aux);
		cout << "Ingrese su municipio: ";
		getline(cin, mnc);
		cout << "Digite su DUI:";
		cin >> dui;
		getline(cin, aux);
		cout << "Ingrese su nombre: ";
		getline(cin, nom);
		cout << "Anio de nacimiento: ";
		cin >> fnac;
		getline(cin, aux);
		cout << "Escriba su sexo M o F: ";
		getline(cin, sex);
		cout << endl;
		InsertarInfo(lista, departamento, mnc, dui, nom, fnac, sex);
		break;
	default:
		cout << "Ingrese una opcion correcta" << endl;
		menuMunicipios();
		break;
	}
}
void InsertarInfo(Nodo*& lista, string depart, string munic, int dui, string name, int nacimiento, string genero)
{
	Nodo* nuevo_nodo = new Nodo();
	struct Nodo* temporal = lista;
	if (nuevo_nodo != NULL)
	{
		nuevo_nodo->departamento = depart;
		nuevo_nodo->municipio = munic;
		nuevo_nodo->DUI = dui;
		nuevo_nodo->nombre = name;
		nuevo_nodo->fechaNac = nacimiento;
		nuevo_nodo->sexo = genero;
		nuevo_nodo->siguiente = NULL;
		if (lista == NULL)
		{
			lista = nuevo_nodo;
		}
		else
		{
			// Agregar un nodo al final
			while (temporal->siguiente != NULL)
			{
				temporal = temporal->siguiente;
			}
			temporal->siguiente = nuevo_nodo;
		}
	}
	else
	{
		cout << "No se pueden agregar mas nodos";
	}
}

void buscar(Nodo* lista, int dui) {
	bool band = false;

	Nodo* actual = new Nodo();
	actual = lista;

	while ((actual != NULL) && (actual->DUI <= dui))
	{
		if (actual->DUI == dui) {
			band = true;
		}
		actual = actual->siguiente;
	}

	if (band == true)
	{
		cout << "Numero de DUI: " << dui << " encontrado. " << endl;
		cout << "Departamento: " << lista->departamento << endl;
		cout << "Municipio: " << lista->municipio << endl;
		cout << "Nombre: " << lista->nombre << endl;
	}
	else {
		cout << "Numero de DUI: " << dui << " no encontrado." << endl;
	}
}

void BuscarPorDepartamento(Nodo* lista, int dui, string departamento) {
	bool band = false;

	Nodo* actual = new Nodo();
	actual = lista;

	while ((actual != NULL) && (actual->DUI <= dui))
	{
		if (
			(
				departamento == departamentos[0] || departamento == departamentos[1] || departamento == departamentos[2] ||
				departamento == departamentos[3] || departamento == departamentos[4] || departamento == departamentos[5] ||
				departamento == departamentos[6] || departamento == departamentos[8] || departamento == departamentos[9] ||
				departamento == departamentos[10] || departamento == departamentos[11] || departamento == departamentos[12] ||
				departamento == departamentos[13]
				) && actual->DUI == dui
			) {
			band = true;
			break;
		}
		actual = actual->siguiente;
	}

	if (band == true)
	{
		cout << "Numero de DUI: " << dui << " encontrado. " << endl;
		cout << "Departamento: " << lista->departamento << endl;
		cout << "Municipio: " << lista->municipio << endl;
		cout << "Nombre: " << lista->nombre << endl;
	}
	else {
		cout << "Numero de DUI: " << dui << " no encontrado." << endl;
	}
}
void eliminar(Nodo*& lista, int dui) {
	if (lista != NULL)
	{
		Nodo* aux_delete;
		Nodo* anterior = NULL; \
			aux_delete = lista;

		while ((aux_delete != NULL) && (aux_delete->DUI != dui))
		{
			anterior = aux_delete;
			aux_delete = aux_delete->siguiente;
		}

		if (aux_delete == NULL)
		{
			cout << "El registro no existe" << endl;
		}
		else if (anterior == NULL) {
			lista = lista->siguiente;
			delete aux_delete;
		}
		else {
			anterior->siguiente = aux_delete->siguiente;
			delete aux_delete;
		}
	}
}

void mostrarInfoDepartamento() {
	int dept, totalHab = 0;
	cout << "================DEPARTAMENTOS===================" << endl;
	cout << "1  - Ahuachapan" << endl;
	cout << "2  - Cabanias" << endl;
	cout << "3  - Chalatenango" << endl;
	cout << "4  - Cuscatlan " << endl;
	cout << "5  - La Libertad" << endl;
	cout << "6  - Morazan " << endl;
	cout << "7  - La Paz " << endl;
	cout << "8  - Santa Ana " << endl;
	cout << "9  - San Miguel " << endl;
	cout << "10 - San Salvador " << endl;
	cout << "11 - San Vicente " << endl;
	cout << "12 - Sonsonate " << endl;
	cout << "13 - La Union " << endl;
	cout << "14 - Usultan " << endl;
	cout << "15 - Salir." << endl;
	cout << "===============================================" << endl;
	cout << "Ingrese su opcion: ";
	cin >> dept;

	switch (dept)
	{
	case 1:

		break;
	case 2:

		break;
	case 3:

		break;
	case 4:

		break;
	case 5:

		break;
	case 6:

		break;
	case 7:

		break;
	case 8:

		break;
	case 9:

		break;
	case 10:

		break;
	case 11:

		break;
	case 12:

		break;
	case 13:

		break;
	case 14:

		break;
	default:
		cout << "Ingrese una opcion correcta" << endl;
		mostrarInfoDepartamento();
		break;
	}
}

