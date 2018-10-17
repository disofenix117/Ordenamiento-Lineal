#include <stdio.h>
struct Minodo
{
	int info;
	Minodo*enlace1;
	Minodo*enlace2;


	Minodo()
	{
		info = 0;
		enlace1 = NULL;
		enlace2 = NULL;
	}
	Minodo(int Pinfo)
	{
		info = Pinfo;
		enlace1 = NULL;
		enlace2 = NULL;
	}
	Minodo(int Pinfo, Minodo*Penlace1, Minodo*Penlace2)
	{
		info = Pinfo;
		enlace1 = Penlace1;
		enlace2 = Penlace2;
	}
};