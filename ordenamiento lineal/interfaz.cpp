#include<iostream>
#include"primitivas.h"
using namespace std;
int main()
{
Secuencial objeto;
	int opcion, cant = 0, info, valor, submenu1, submenu2, subindex1 = 1, subindex2 = 1, index = 1, dato;
	Minodo *R;

	do
	{
		cout << "----------------------------//-------------------" << endl;
		cout << "\t. . : : M E N U : : . ." << endl;
		cout << " Que opcion desea realizar: " << endl;
		cout << " 1. Crear lista. " << endl;
		cout << " 2. probar lista. " << endl;
		cout << " 3. insertar dato. " << endl;
		cout << " 4. ver lista. " << endl;
		cout << " 5. eliminar dato. " << endl;
		cout << " 6. descruir lista " << endl;
		cout << " 7. Salir. " << endl;
		cin >> opcion;
		switch (opcion)
		{
		case 1:
			system("cls");
			{
				objeto.crear();
				cout << "lista creada" << endl;
				break;
			}
		case 2:
			system("cls");
			{
				objeto.probar();
				if (objeto.probar() == true)
				{
					cout << "la lista existe " << endl;
				}
				else
				{
					cout << "no existe la lista " << endl;
				}
				break;
			}
		case 3:
			system("cls");
			{
				cout << "ingrese un valor " << endl;
				cin >> info;
				cant = cant + 1;
				objeto.insertar(info);
				cout << "dato insertado " << endl;
				break;
			}
		case 4:
			system("cls");
			{
				do
				{
					cout << "De que forma lo quiere ver: " << endl;
					cout << "1.ver de la forma facil." << endl;
					cout << "2.ver de la forma heavy(PROFE ME PUSO A SUFRIR PERO TODO BIEN)." << endl;
					cin >> submenu1;
					switch (submenu1)
					{
					case 1:
						system("cls");
						{
							R = objeto.ver();
							cout << "Los datos son: " << endl;
							Minodo *S = R;
							int i = 1;
							cout << "Posicion\t " << " Dato " << endl;
							while (S != NULL)
							{
								cout << "   " << i << "\t\t   " << S->info << endl;
								S = S->enlace;
								i++;
							}
							subindex1 = 0;
							break;

						}
					case 2:
						system("cls");
						{
							cout << "Posicion\t " << " Dato " << endl;
							for (int i = 1; i <= cant; i++)
							{
								valor = objeto.verheavy(i);
								cout << "   " << i << "\t\t   " << valor << endl;

							}
							subindex1 = 0;
							break;
						}
					default: cout << "esa opcion no existe, seleccione una opcion valida" << endl;
					}
				} while (subindex1 == 1);
				break;
			}
		case 5:
			system("cls");
			{
				do
				{
					cout << "Cual quiere eliminar: " << endl;
					cout << "1.un dato." << endl;
					cout << "2.el primer dato." << endl;
					cout << "3.el ultimo dato." << endl;
					cin >> submenu2;
					switch (submenu2)
					{
					case 1:
					{
						cout << "Que dato desea eliminar" << endl;
						cin >> dato;
						if (objeto.eliminar(dato) == true)
						{
							cant = cant - 1;
							cout << "dato eliminado." << endl;
							subindex2 = 0;
						}
						else
						{
							cout << "ese dato no existe en la lista" << endl;
						}

						break;

					}
					case 2:
					{
						objeto.eliminarprimero();
						cant = cant - 1;
						cout << "dato eliminado." << endl;
						subindex2 = 0;
						break;
					}
					case 3:
					{
						objeto.eliminarultimo();
						cant = cant - 1;
						cout << "dato eliminado." << endl;
						subindex2 = 0;
						break;
					}
					default: cout << "esa opcion no existe, seleccione una opcion valida" << endl;
					}
				} while (subindex2 == 1);

				break;
			}
		case 6:
			system("cls");
			{
				do
				{
					cout << "De que forma lo quiere destruir: " << endl;
					cout << "1.forma facil." << endl;
					cout << "2.forma dificil." << endl;
					cin >> submenu1;
					switch (submenu1)
					{
					case 1:
						system("cls");
						{
							objeto.destruir();
							cout << "lista destruida" << endl;
							subindex1 = 0;
							break;

						}
					case 2:
						system("cls");
						{
							objeto.destruirheavy(cant);
							cout << "lista destruida" << endl;
							subindex1 = 0;
							break;


						}
					default: cout << "esa opcion no existe, seleccione una opcion valida" << endl;
					}
				} while (subindex1 == 1);

				break;
			}
		case 7:
		{
			index = 0;
			break;
		}
		default: cout << "esa opcion no existe, seleccione una opcion valida" << endl;

		}

	} while (index == 1);
	system("pause");
	return 0;
}