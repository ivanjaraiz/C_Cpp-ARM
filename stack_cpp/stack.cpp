# es una lista de elementos donde tenemos una restricción
# en cuanto a lo que podemos sacar de la stack. 

#include <iostream>
#include <stack>

int main(int argc, char** argv)
{
	std::stack<int> pila; // objeto de tipo stack de enteros. 
	// OPERACIONES DE LA STACK
	std::cout << "Vacía?" << pila.empty() << std::endl;
	
	pila.push(5);
	std::cout << "Vacía?" << pila.empty() << std::endl;
	pila.push(5);	
	pila.push(6);	
	pila.push(6);
	
	// devuelve el elemento que hay encima de la pila
	std::cout << "Top" << pila.top() << std::endl;

	// sacar de la pila
	pila.pop();	
	std::cout << "Top" << pila.top() << std::endl;

	pila.push(56565);
	pila.pop();
	std::cout << "Top" << pila.top() << std::endl;  
	
	return 0;
}