#include <vector>
#include <iostream>
using namespace std;

template <class T>
class Lista : public vector <T>{
	public:
		Lista ();
    void adicionar (T elem);
		void setElemento(int pos, T elem);
		int Buscar(T elem);
};

template <class T>
Cola <T>::Lista (): vector<T> () {}

template <class T>
void Lista <T>::adicionar (T elem) {
	this->push_back (elem);
}

template <class T>
void Lista<T> ::setElemento(int pos, T elem){
  this->at(pos) = elem;
}

template <class T

int Lista<T> :: Buscar(T elem){
    for (int i = 0; i <this->size(); i++) {
      T tmp = this->at(i);
      if (tmpo == elem) {
        return i;
      }
    }
    return -1;
}


int main () {
  try {
	Lista <int> l;

	l.adicionar (2);
	l.adicionar (5);
	l.adicionar (7);

  l.Buscar(5);


  }catch (const std::out_of_range &oor) {
  	cout << "No hay mas elementos en la lista" << endl;
  }
}
