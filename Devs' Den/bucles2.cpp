 // El bucle for va muy bien porque yo le pongo el limite, es decir, esto va desde un inicio 
 // a un final. 
 
 
 // Pero si quiero hacer: 
 // usuario introduzca datos hasta que tenga sea el 999
 
 int main (){
	 // Le pido al usuario un numero: 
	 // mientras el numero no sea 999, repetir lo siguiente: 
	 // mostrar numero *2
	 // pedir otro numero 
	 int numero; 
	 cout << "Introduce un numero:" << endl;
	 cin >> numero; 
	 
// CONDICION PARA QUE SIGA, NO PARA QUE PARE
// en este tipo de bucles no sabemos cuantos numeros introduce el user!
  	 
	while (numero != 999) {
		
		// int numero; No volvemos a poner la variable porque ya existe. 
		std::cout << "El numore * 2 es: " << numero *2 << std::endl;
		std::cout << "Por favor, inserte otro numero valido:" << std::endl;	
		std::cin << numero; 
	}
	
// iteración 1 : numero (6) != 999 ==== > true ====> codigo
// iteración 2 : numero (6) != 999 ==== > true ====> codigo
// ....
// según está es bucle infinito
	
// iteración 44 : numero (7) != 999 ==== > true ====> codigo .... cin >> numero = 999;	
// iteración 45 : numero (999) != 999 ==== > false ====> sale del codigo	
	
//== compara valores (¿son iguales?)

	 
	 return 0;
 }
 
 
 
 //________________________________________
 // otra opción es ejecutar el código primero y luego evaluar, es decir, estructura do-while
 
 
 // ejecuto y compruebo despues. 
 do {
	 <codigo>
 }while (numero != 999);
 
 
 
// ejemplo: el user introduce 999  
// el código no se ejecuta nunca
	while (numero != 999) {
		
		// int numero; No volvemos a poner la variable porque ya existe. 
		std::cout << "El numore * 2 es: " << numero *2 << std::endl;
		std::cout << "Por favor, inserte otro numero valido:" << std::endl;	
		std::cin << numero; 
	}

// en cambio, en el caso 2 tenemos lo siguiente:  
// ejecuta el codigo luego evalura y como se metió 999 sale	
 do {
	 <codigo>
 }while (numero != 999);
 


