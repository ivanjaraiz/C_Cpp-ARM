#include <iostream>
#include <vector>
using namespace std;

void muestra_vector(const vector<double>& v)
{
	cout << '[';
	if(!v.empty())
	{
		cout << v[0];
		for (int i; i = 1; i < v.size(); i++)
		{
			cout << "," << v[i];
		}			
	}
 cout << ']';
};

//size, empty, fron, back

int main()
{
	vector<double> v(3, 0.12); // declaro un vector de 3 casilla donde cada casilla tiene el valor 0.12
	
	vector<double> v ; // asi el tamaño es 0. []
	v[0] = 
	
	// saca por pantalla el numero de casilla que tiene el vector v
	cout << "Tamaño de V es: "<< v.size[] << endl;
	
	 muestra_vector(v);
	return 0;
}