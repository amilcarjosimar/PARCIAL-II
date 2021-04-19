// KAROL EUNICE CASTILLO RAMIREZ 0909-20-19052
// Serie 3 EJERCICIO 1

//DECLARACION DE LIBRERIAS
#include <iostream>
#include <conio.h>

using namespace std;

// VARIABLES Y VECTORES DECLARACION
int alfa[3][3]; 
int total[3]; 
// Variables 
int f, c, op; 

// INGRESO CURSO ESTRUCTURA
void ingresoDatos(){
	for ( f = 0; f <= 2; f++ ){ 
		for ( c = 0; c <= 2; c++ ){ 
			cout << "Ingreso de dato en la fila " << f + 1 << " columna " << c + 1 << " = "; 
			cin >> alfa[f][c]; // Ingreso de Datos
		}
	}
}

// SUMAR FILAS DE LA MATRIZ ESTRUCTRURA
void sumaTotal(){
	total[0] = alfa[0][0] + alfa[1][1] + alfa[2][2];
	total[1] = alfa[2][0] + alfa[2][1] + alfa[2][2];
	total[2] = alfa[2][0] + alfa[1][1] + alfa[0][2];
}

// MOSTRAR MATRIZ Y TOTAL ESTRUCTURA
void mostrarMatrizVector(){
	cout << " Matriz ALFA " << endl;
	for ( f = 0; f <= 2; f++ ){ 
		cout << "  " << alfa[f][0] << "  " << alfa[f][1] << "  " << alfa[f][2] << endl;
	}
	// ESPACIOS EN LUGAR DE ESCRIBIR PARA ORDENAR
	cout << endl << endl << endl << endl << endl; 
	
	cout << "Vector TOTAL" << endl;
	cout << "  " << total[0] << "  " << total[1] << "  " << total[2] << endl;
}

//LIBRERIAA PARA LIMPIAR PANTALLA Y LA MERA ESTRUCTURA
#include <stdlib.h>
int main(){	
	do{
		// VISUALIZAR PANTALLA
		cout << "MENU DE OPCIONES SERIE 3 EJERCICIO 1" << endl;
		cout << "Opción 1:   Ingresar datos a la matriz ALFA" << endl;
		cout << "Opción 2:   Calcule la suma de cada fila de la matriz y coloque en cada posición del vector TOTAL." << endl;
		cout << "Opción 3:   Mostrar la matriz ALFA arriba y 5 espacios abajo el vector TOTAL." << endl;
		cout << "Opción 4:   Finalizar." << endl;
		// Ingreso de Opcion
		cout << "Elija Una sde las Opcion  "; cin >> op; 
		cout << endl << endl;
		//ESTRUCTURA SWITCH SEGUN LA OPCION QUE ELIJA HACER LO SIGUIENTE
		switch ( op ){ 
			case 1: 
			//LLAMAR FUNCION DE INGRESO DE DATOS
				ingresoDatos(); 
				system ("cls");  // Limpiamos pantalla
				break; // SALIR DE LA ESTRUCTURA
			case 2: 
			//LLAMAMOS FUNCION DE SUMAR LAS FILAS
				sumaTotal(); 
				cout << "Las operaciones se han realizado correctamente" << endl;
				system ("pause"); // Detener Programa
				system ("cls"); 
				break;
			case 3: 
			//LLAMAMOS LA FUNCION DE VISUALIZAR O MOSTRAR LA MATRIZ
				mostrarMatrizVector(); 
				getch(); // Detener Programa
				system ("cls"); 
				break; // Salir Switch
			case 4: break; 
			// Salir Switch
			default: 
				cout << "\nEsta Opcion no esta disponible" << endl;
				system ("pause"); // Detener Programa
				system ("cls"); 
		}
	} while ( op != 4 ); // Mientras  la opcion que elijan que tiene como variable op sea diferente del 1 al 4 seguir con la estructura de do While
}
