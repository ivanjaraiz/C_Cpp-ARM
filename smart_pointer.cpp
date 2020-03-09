#include <iostream>
#include <vector>
#include <memory> // podemos usar punteros inteligentes
//C++98
//C++11
using namespace std;

class tal {
	public: 
	
	private: 

	struct NdoInt{
		int dato;
		//NdoInt* sgt;
		// Apuntadores de datos convecionales 
		shared_ptr<NdoInt> sqt;
		NdoInt(int x):dato(x),sqt(0){};	
	};
	
	//NdoInt* inicio;
	
	// Indica que vamos a usar un apuntador de tipo
	// shared_pointer para apuntar a objetos de tipo
	// NdoInt
	
	// shared_pointer es una plantilla de clase
	// Aquí lo que se hace es usar la plantilla de clase
	
	// para usarla, se coloca en nombre de la plantilla
	// y entre corchetes ponemos NdoInt, que es lo que se llamar
	// especializar la plantilla de clase.  
	
	
	// la clase representar un apuntador de tipo shared, para 
	// nuevos punteros. 
	shared_ptr<NdoInt> inicio;
	
	
};

// Una estructuras basada, integramente en apuntadores inteligentes, 
// nos va a garantizar, que no tengamos fugas de memoria. 
// Apuntadores convencionales. 
// Si pongo dos tipos de apuntadores, es mas probable que tengamos 
// fugas de memoria. 
// Objetos que no están referenciados por apuntadores inteligentes.. jodido. 
// Entonces estaríamos obligados a usar el delete, para que la memoria sea 
// liberada.
// Aunque los puntero shared_pointer son bastante compatibles, hay algunos caso 
// en el que no lo son. Y mezclar los tipos de punteros nos pueden generar problemas
// de compilación. Bastante extraños. 

// Lo ideal es convertir toda la estructura a checkpointer. 
 
 // Otra cosa, esque si usamos punteros inteligenes, no solo usan checkpinter sino apuntadores 
 // convencionales. y aquí vemos la incompatibilidades de los dos tipos. 
 
CnjOrdInt::CnjOrdInt(): inicio(0) {
	
} 


// truco File/replace y que busque NdoInt* y lo remplace por NdoInt* sared_ptr<NdoInt>
// Replace all, con esto nos aseguramos que esta todo cambiado. 
CnjOrdInt::CnjOrdInt(const CnjOrdInt& orig) {
	//NdoInt* p = orig.inicio;
	sared_ptr<NdoInt> p = orig.inicio; 
	if (p == 0)
		inicio = 0;
	else{
		//////////inicio = new NdoInt(orig.inicio->dato);
		// básicamente, es conversión de tipo. 
		// tenemos un apuntador tradicional a apuntadores inteligentes y guardarlos 
		// en tipos que son apuntadores inteligentes. 
		// Y guardarlo con otro tipo.  
		inicio = shared_ptf<NdoInt> (new NdoInt(orig.inicio->dato)) ;
		p = p->sgt;
		NdoInt* ultimo = inicio;
	}
}
 
// El destructor no va a ser necesario, pero se harán los cambios tb. 

