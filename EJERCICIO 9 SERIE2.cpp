// Karol Eunice Castillo Ramirez 0909-20-19052 serie 2

//Declaramos las Librerias 

#include <iostream>
#include <conio.h>


using namespace std;

// declaramos los Vectores 
// Estudiante
int curso[2][5]; 
// Curso
int sumCurso[2]; 
// Suma de curso
float promCurso[2]; 
//declaramos variables
int c, e, op; 

// ingreso de Curso estructura
void ingresoDatos(){
	// Saltos de curso 1 y 2
	for ( c = 0; c <= 1; c++ ){ 
	      // Saltos estudiante 1 a 5
		for ( e = 0; e <= 4; e++ ){ 
			cout << "Ingrese nota de la clase " << c + 1 << " del estudiante " << e + 1 << " = "; 
			//entrada de los datos
			cin >> curso[c][e]; 
		}
	}
}

// calcular promedio estructura
void calculoPromedio(){
	// Saltos de curso 1 y 2
	for ( c = 0; c <= 1; c++ ){ 
	    // Saltos estudiante 1 a 5
		for ( e = 0; e <= 4; e++ ){ 
			sumCurso[c] += curso[c][e]; // operacion Suma de cada clase 
		}
		promCurso[c] = sumCurso[c] / 5; // operacion del Promedio de cada clase
	}
}

// visualizar vectores y los promedios estructura
void mostrarVectores(){
	cout << "Vector Curso 1"; 
	for ( e = 0; e <= 4; e++ ){ 
		cout << "     " << curso[0][e];
	}
	// muestra promedio
	cout << "\nEl promedio del curso es de:  " << promCurso[0]; 
	
	cout << "Vector Curso 2";
	for ( e = 0; e <= 4; e++ ){ 
		cout << "     " << curso[1][e];
	}
	cout << "\nEl promedio del curso es de:  " << promCurso[1]; 
}
#include <stdlib.h>
// visualizar estructura
int main(){	
	do{
		// visualizar 
		cout << "MEMORIA ESTATICA" << endl;
		cout << "Opcion 1:   Ingresar datos de cada curso." << endl;
		cout << "Opcion 2:   Mostrar la primera nota del Vector 1" << endl;
		cout << "Opcion 3:   Mostrar la última nota del Vector 2" << endl;
		cout << "Opcion 4:   Calcule el promedio de los cursos." << endl;
		cout << "Opcion 5:   Mostrar los dos Vectores, y el resultado Promedio de cada curso." << endl;
		cout << "Opcion 6:   Finalizar." << endl;
		// Ingreso de Opcion
		cout << "Ingrese Una Opcion de las mencionadas"; cin >> op; 
		cout << endl << endl;
		
		// estructura switch que Segun la opcion elegida hacer 
		switch ( op ){ 
			case 1: 
			//llamamos la funcion de ingresar datos
				ingresoDatos(); 
				//este es para limpiar la pantalla
				system ("cls");  
				//salir de la estructura
				break; 
			case 2: 
				cout << "La primera nota del Vector 1 es de: " << curso[0][0];  
				getch(); // Detener Programa
				//este es para limpiar la pantalla
				system ("cls"); 
				//salir de la estructura
				break;
			case 3: 
				cout << "La ultima nota del Vector 2 es de: " << curso[1][4]; 
				getch(); // Detener Programa
				//este es para limpiar la pantalla
				system ("cls"); 
				//salir de la estructura
				break; 
			case 4: 
				calculoPromedio();
				cout << "El calculo se ha Realizado correctamente" << endl;
				system ("pause"); // Detener Programa
				//este es para limpiar la pantalla
				system ("cls"); 
				//salir de la estructura
				break; 
			case 5: 
				mostrarVectores();
				cout << "precione enter" << endl;
				//este es para limpiar la pantalla
				system ("cls"); 
				//salir de la estructura
				break; 
				//salir de la estructura
			case 6: break; 
			default: 
				cout << "\nEsta Opcion no esta disponible" << endl;
				system ("pause"); // pausar o detener el Programa
				system ("cls"); //este es para limpiar la pantalla
		}
	} while ( op != 6 ); // Mientras que la opcion es diferente a las opciones del 1 al 6 sea seguira con la estructura do While
}
