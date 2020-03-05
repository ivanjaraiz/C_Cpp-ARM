#include"animal.hpp"
#include"saludos.hpp" //  
#include<vector>


class A
{
	public: 
		static void B(){};
};

void Hola()
{
	std::cout << "Hello" << std::endl;
}

 
int main ()
{
	using namespace saludos
	
	std::vector<Animal*> vect; //vector de punteros a animal???
	A::B();
	Hola(); //¿decir hola de saludos o el declarado arriba?
	
	// esto si no se usa usingnamespace saludos
	//saludos::hola();
	//saludos::adios();
	
	hola(); // este es el global
	saludos::hola(); // este el de namespace saludos
	
	
	return 0;
}