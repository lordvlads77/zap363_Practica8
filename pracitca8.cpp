/*Eva Luna Alvarez */
/*Esta es una libreria */
/*Esta practica es para ense�arnos sobre los arrays.*/

#include <iostream> 
#include <stdio.h>
#include <Windows.h>
using namespace std;

int main()
{

	/*tipo_de_dato | Nombre_variable [# de elementos] */

	
	string titulo;
	string A�o;
	string Autor;
	string atitulo[5] = { "Percy_Jackson_y_el_ladron_del_rayo", "Percy_Jackson_y_el_Mar_de_los_Monstruos", "Percy_Jackson_La_Maldici�n_del_Titan", "Percy_Jackson_La_batalla_del_Laberinto", "Percy_Jackson_El_�ltimo_heroe_del_Olimpo" };
	string aa�o[5] = { "2005", "2006", "2007", "2008", "2009", };
	string aAutor[5] = { "Rick_Riordan", "Rick_Riordan1", "Rick_Riordan2", "Rick_Riordan3", "Rick_Riordan4", }; 

	cout << "Por favor en lugar de espacios usar '_' guiones bajos" << endl << endl;

	cout << "Para saber si el libro esta en existencia, escribe el titulo. " << endl;
	cin >> titulo; cout << endl;

	cout << "Escribe el A�o de publicacion. " << endl;
	cin >> A�o; cout << endl;

	cout << "Escribe el Autor " << endl;
	cin >> Autor; cout << endl;

	if (titulo == atitulo[0]);
	{
		

		if (A�o == aa�o[0]);
		{


			if (Autor == aAutor[0])
			{


				cout << "El libro esta en existencia" << endl;

			}
			

		}

	}


	if (titulo == atitulo[1]);
	{


		if (A�o == aa�o[1]);
		{


			if (Autor == aAutor[1])
			{


				cout << "El libro esta en existencia" << endl;

			}


		}

	}

	if (titulo == atitulo[2]);
	{


		if (A�o == aa�o[2]);
		{


			if (Autor == aAutor[2])
			{


				cout << "El libro esta en existencia" << endl;

			}


		}

	}

	if (titulo == atitulo[3]);
	{


		if (A�o == aa�o[3]);
		{


			if (Autor == aAutor[3])
			{


				cout << "El libro esta en existencia" << endl;

			}


		}

	}

	if (titulo == atitulo[4]);
	{


		if (A�o == aa�o[4]);
		{


			if (Autor == aAutor[4])
			{


				cout << "El libro esta en existencia" << endl;

			}


		}

	}



}