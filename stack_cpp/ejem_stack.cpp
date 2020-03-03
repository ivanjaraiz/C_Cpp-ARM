// Da preferencia a lo último que entra!
#include <iostream>
#include <stack>

int main (int argc, char ** argv)
{
	std::stack<int> pila;
	std::stack<int> aux; 
	
	for(int =0; i <10; i++ )
	{
		pila.push(i);
	}

	while(!pila.empty())
	{
		std::cout << pila.top() << std::endl;
		aux.push(pila.top());
		pila.pop();
	}
	
	std::cout << "Empty?" << pila.empty() << std::endl; 
	
	while(!aux.empty())
	{
		pila.push(aux.top())
		aux.pop();
	}
	 
	
	
	
	
	return 0;
}