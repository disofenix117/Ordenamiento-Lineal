#include"primitivas.h"
void Secuencial::crear()
{
	lista = NULL;
}

bool Secuencial::probar()
{
	if (lista == NULL)
	{
		return true;
	}
	else
	{
		return false;
	}

}

bool Secuencial::insertar(int x)
{
	Minodo* Q = new Minodo(x);
	if (lista == NULL)//no hay nodos
	{
		lista = Q;
	}
	else // varios nodos
	{
		Minodo *P = NULL;//Crea sin memoria
		P = lista;//asigna
		while (P->enlace1 != NULL)//recorre los nodos
		{
			P = P->enlace1;
		}
		P->enlace1 = Q;
	}
	return true;
}

Minodo * Secuencial::ver()
{
	return lista;
}
int Secuencial::verheavy(int x)
{
	Minodo *P = lista;
	if (P == NULL)
	{
		return P->info;
	}
	else
	{
		int i = 1;
		if (x == 1)
		{
			return P->info;
		}
		else
		{
			for (i; i < x; i++)
			{
				P = P->enlace1;
			}
		}
		return P->info;
	}
}

bool Secuencial::eliminar(int x)
{
	Minodo *P = lista;
	Minodo*Q = lista;
	while (P->enlace1 != NULL&&P->info != x)
	{
		P = P->enlace1;
	}
	if (P->enlace1 == NULL)
	{
		return false;
	}
	else
	{

		while (P->info != x)
		{
			P = P->enlace1;
		}
		while (Q->enlace1 != P)
		{
			Q = Q->enlace1;
		}
		Q->enlace1 = P->enlace1;
		delete P;
		return true;
	}
}
void Secuencial::eliminarultimo()
{
	Minodo *P = lista;
	Minodo *Q = P;
	while (P->enlace != NULL)
	{
		Q = P;
		P = P->enlace;
	}
	Q->enlace = NULL;
	delete P;
}
void Secuencial::eliminarprimero()
{
	Minodo *Q = lista;
	lista = Q->enlace;
	Q->enlace = NULL;
	delete Q;
}

void Secuencial::destruirheavy(int x)
{
	while (x != 0)
	{
		Minodo *P = lista;
		Minodo *Q = P;
		while (P->enlace1 != NULL)
		{
			Q = P;
			P = P->enlace1;
		}
		Q->enlace1 = NULL;
		delete P;
		x = x - 1;
	}
}
void Secuencial::destruir()
{
	delete lista;
}