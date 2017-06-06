/*
 Programa que determina si una palabra ingresada por el usuario es palindromo
 */


#include <iostream>
#include <string>
#include <stack>
#include <queue>
void verificar(std::string palabra);

/*
 Funcion principal (main). Pide una palabra al usuario y llama a la función verificar para comprobar si es un palindromo o no.
 */
int main()
{
	std::string palabra;
	
	std::cout<< "Este programa determina si una palabra es palindromo o no." << std::endl;
	std::cout<<"Introdizca la palabra que desea examinar: "<<std::endl;
	std::getline (std::cin, palabra);
	verificar(palabra);
	return 0;
}

/*
Funcion verificar. Recive la palabra ingresada por el usuario, la ingresa sin espacio en una cola y en una pila para despues comparar
el ultimo miembro ingresado a la pila con el primer miembro ingresado a la cola, de ser iguales todos los caracteres comparados se conluye que
la palabra ingresada es un palindromo, de otro modo, regresa que la palabra ingresada no es un palindromo.
 */
void verificar(std::string palabra)
{
	std::queue <char> cola;
	std::stack <char> pila;
	int j=0;
	for(int i=0;i<palabra.length();i++)
	{
		if(palabra[i]!=32)
		{
			cola.push(palabra[i]);
			pila.push(palabra[i]);
		}
	}
	for(int i=0;i<cola.size();i++)
	{
		if(cola.front()==pila.top())
		{
			j++;
		}
		else
		{
			break;
		}
	}
	if(j==cola.size())
	{
		std::cout<<palabra<<" es un palindromo."<<std::endl;
	}
	else
	{
		std::cout<<palabra<<" no es un palindromo."<<std::endl;
	}
};
