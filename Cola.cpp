#include <vector>
#include <iostream>
using namespace std;

template <class T> 
class Cola : public vector <T>{
	public:
		Cola ();
		void adicionar (T elem);
		T eliminar ();
		void mostrar ();
};
template <class T>
Cola <T>::Cola (): vector<T> () {}

template <class T>
void Cola <T>::adicionar (T elem) {
	this->push_back (elem);
}

template <class T>
void Cola <T>::mostrar () {
	int n = this->size ();
	for (int i=0; i < n; i++)
		cout << this->at (i)  << ", ";
	cout << endl;
}

template <class T>
T Cola <T>::eliminar () {
	int posUltimo = this->size () - 1;
	T elem = this->at (posUltimo);
	this->pop_back();
	return elem;
}



int main () {
  try {
	Cola <int> c;
	
	c.adicionar (2);
	c.adicionar (5);
	c.adicionar (7);
	
	c.mostrar ();
	
	c.eliminar ();
	c.mostrar ();
	c.eliminar ();
	c.mostrar ();
	
	c.eliminar ();
	c.mostrar ();
	
	c.eliminar ();
  }catch (const std::out_of_range &oor) {
  	cout << "No hay mas elementos en la pila" << endl;
  }
}