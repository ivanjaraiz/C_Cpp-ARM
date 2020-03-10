

int main(){
	
	// Hacerlo así no es muy práctico
	int variable;
	std::cout << "Intoduzca un valor" << endl;
	std::cin>>variable; 
	
	int variable2;
	std::cout << "Intoduzca un valor" << endl;
	std::cin>>variable2; 
	
	int variable3;
	std::cout << "Intoduzca un valor" << endl;
	std::cin>>variable3;
	
	int variable4;
	std::cout << "Intoduzca un valor" << endl;
	std::cin>>variable4;
	
	// En vez de hacerlo así usar un for o while
	
	// se repite el código tantas veces como se especifique
	// Si condición es cierta, se ejecuta código entre llaves
	// Si es false no ejecuta el código. 
	// acción después de la repetición del código sucede algo. 
	
	// opciones contador: 
	int var = 1; 
	var = var +1;
	// forma corta
	var += 1;
	// caso especial de solo sumar 1. 
	var++;
	++var;
	// la forma de trabajar del código es: 
	// contador = 0 ====> contador(0) <5? true ====> ejecuta_código =====>contador ++;
	// contador = 0 ====> contador(1) <5? true ====> ejecuta_código =====>contador ++;	
	// contador = 0 ====> contador(2) <5? true ====> ejecuta_código =====>contador ++;
	// contador = 0 ====> contador(3) <5? true ====> ejecuta_código =====>contador ++;
	// contador = 0 ====> contador(4) <5? true ====> ejecuta_código =====>contador ++;
	// contador = 0 ====> contador(5) <5? false ====> salir del bucle;

	
	for(variable_inicial; condición_interación; acción){}
	for(int contador = 0; contador < 5; contador = contador + 1)
	for(int contador = 0; contador < 5; contador++)
	{
		std::cout << "el contador es: " << contador << std::endl; 
	}
	
	// el contador fuera de 10 en 10, <= para incluir el 50 
	// la variable contador solo existe entre llaves. 
	for(int contador = 0; contador <= 50; contador += 10)
	{
		std::cout << "el contador es: " << contador << std::endl; 
	}
	
//////////
	
	//¿Qué muestra aquí la variable? siempre 20 porque según acaba la llave la variable 
	// se destruye
	for(int contador = 0; contador < 5; contador ++)
	{
		int variableEjemplo = 20;
		std::cout << "el contador es: " << contador << std::endl; 
		variableEjemplo = 30;
	}
///////////////

// ¿que muestra el cout de fuera del for? el 40!!
		int variableEjemplo = 40;
	for(int contador = 0; contador < 5; contador ++)
	{
		int variableEjemplo = 20;
		std::cout << "el contador es: " << contador << std::endl; 
		variableEjemplo = 30;
	}	
		std::cout << "el contador es: " << contador << std::endl; 	
	return 0;
}

//////////
// Esto no se cumple porque no se cumple la condición nunca, es decir: 
// contador = 0 ====> contador(0) >5? false ====> salir del bucle;
	for(int contador = 0; contador > 5; contador ++){}

// Esto no acaba nunca!! 
	for(int contador = 0; contador > -1; contador ++){}
