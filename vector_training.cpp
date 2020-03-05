#include <iostream>
#include <vector>
using namespace std;

void muestra_vector(const vector<double>& v);

//size, empty, fron, back

int main()
{
	vector<double> v(3, 0.12);
	muestra_vector(v);
	return 0;
}