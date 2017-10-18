#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

class Tablero{
protected: 
	char matriz[3][3];
    char matrizopciones[3][3];
	char lista[9] = {'a','b','c','d','e','f','g','h','i'};
    char  lista2[9]={'-','-','-','-','-','-','-','-','-'};
	int numero = 0;
    string nombre_juego;
public:
	Tablero();
	void imprimir_matriz();
    void imprimir_nombre_juego();
};


Tablero::Tablero(){}

void Tablero::imprimir_matriz(){
            /* 
            Muetra en pantalla el tableroado, lo que ve 
            el usuario
            */
            for (int i=0; i<3; i++){
                printf("           ");
                for (int p=0; p<3; p++){
                	matriz[i][p]=lista[numero];
                    matrizopciones[i][p] = lista2[numero];
                    printf("| %c (%c) ", matrizopciones[i][p],matriz[i][p]);
                    numero = numero + 1;
                }
                printf("| \n");
                printf("                \n");
            }
        }

void Tablero :: imprimir_nombre_juego(){
    cout << "    |+|+|+|+| JUEGO TRIQUI |+|+|+|+|" << endl;
    cout << "" << endl;
}


class Jugador : public Tablero{
private:
    string nombre;
    int puntos;
    char letra;
public:
    Jugador(string,int);
    void pedir_nombre();
    void imprimir_datos();
    void obtenerletra();
};

Jugador :: Jugador(string _nombre,int _puntos){
    nombre = _nombre;
    puntos = _puntos;
}

void Jugador :: pedir_nombre(){
    cout << "Digite su Nombre: " << endl;
    cin >> nombre;
}

void Jugador :: imprimir_datos(){
    cout <<"Jugador Activo: " << nombre << "       " << "Puntos: "<< puntos << endl;
    cout << "\n";
}

/*
char *obtenerCasilla(char letra){
  for (int i = 0; i < 3; i++)
    for (int j = 0; j < 3; j++)
      if (matrizopciones[i][j] == letra)
        return &matriz[i][j];

  return NULL;
}

*/

void Jugador :: obtenerletra(){
    cout << "Que Casilla Escoge: " << endl;
    cin >> letra;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if(matriz[i][j] == letra){
                matrizopciones[i][j] == 1;
            }
        }
    }
}




int main()
{
	Tablero tbl;
    Jugador jugadorreal("",0);
    Jugador jugadormaquina("Maquina",0);
    jugadorreal.pedir_nombre();
    system("clear");
    tbl.imprimir_nombre_juego();
    jugadorreal.imprimir_datos();
    jugadormaquina.imprimir_datos();
	tbl.imprimir_matriz();
    jugadorreal.obtenerletra();
    system("clear");
    tbl.imprimir_matriz();

	return 0;
}