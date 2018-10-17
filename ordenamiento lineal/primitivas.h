#include"nodo.h"

class Secuencial
{
private://variables
	int x, a;


public:
	void crear();
	bool probar();

	bool insertar(int);

	int verheavy(int);
	Minodo * ver();

	bool eliminar(int);
	void eliminarultimo();
	void eliminarprimero();

	void destruirheavy(int);
	void destruir();


	//atributos
	Minodo *lista;

};