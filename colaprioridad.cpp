#include <vector>
#include <iostream>
#include "Cola.cpp"
using namespace std;

template <class T> 

class ColaPrioridad : public vector <T>{
	public:
		ColaPrioridad ();
		void adicionar (T elem);
		int buscarPos(T elem);
		T eliminar ();
		void intercambiar(pos);
};


template <class T>
ColaPrioridad <T>::ColaPrioridad (): vector<T> () {}


template <class T>
void ColaPrioridad <T>::adicionar (T elem) {
	this->push_back (elem);
}


template <class T>
int ColaPrioridad <T>:: buscarPos (T elem) {
	for (int i = 0; i < size(); i++)
	{
		if(vector[i]== elem){
			return vector[i];
		}
	}
}

template <class T>
void ColaPrioridad <T>::intercambiar (pos) {
	this->elem.swap(elem1);
}


int main () {
  try {
	ColaPrioridad <int> c;
	
	cp.adicionar (2);
	cp.adicionar (5);
	cp.adicionar (7);
	
	
	cp.buscarPos(5);
	cp.buscarPos(7);
	
	
	c.eliminar ();
  }catch (const std::out_of_range &oor) {
  	cout << "No hay mas elementos en la pila" << endl;
  }
}