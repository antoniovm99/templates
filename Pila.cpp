#include <vector>
#include <iostream>
using namespace std;

template <class T> 
class Pila : public vector <T>{
	public:
		Pila ();
		void adicionar (T elem);
		T eliminar ();
		void mostrar ();
};
template <class T>
Pila <T>::Pila (): vector<T> () {}

template <class T>
void Pila <T>::adicionar (T elem) {
	this->push_back (elem);
}

template <class T>
void Pila <T>::mostrar () {
	int n = this->size ();
	for (int i=0; i < n; i++)
		cout << this->at (i)  << ", ";
	cout << endl;
}

template <class T>
T Pila <T>::eliminar () {
	int posUltimo = this->size () - 1;
	T elem = this->at (posUltimo);
	this->pop_back();
	return elem;
}



int main () {
  try {
	Pila <int> p;
	
	p.adicionar (2);
	p.adicionar (5);
	p.adicionar (7);
	
	p.mostrar ();
	
	p.eliminar ();
	p.mostrar ();
	p.eliminar ();
	p.mostrar ();
	
	p.eliminar ();
	p.mostrar ();
	
	p.eliminar ();
  }catch (const std::out_of_range &oor) {
  	cout << "No hay mas elementos en la pila" << endl;
  }
}