#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

class Tablero{
public:
	char matriz[3][3]={
								'a','b','c',
								'd','e','f',
								'g','h','i'};
    char matrizopciones[3][3]={
												'-','-','-',
												'-','-','-',
												'-','-','-'};
    string nombre_juego;
public:
	Tablero();
	void imprimir_matriz();
  void imprimir_nombre_juego();
	void cambiarSimbolos (char letra, char simbolo);
};

void Tablero::cambiarSimbolos (char letra, char simbolo) {
	for (int i = 0; i < 3; i++)
	{
			for (int j = 0; j < 3; j++)
			{
					if(matriz[i][j] == letra){
							matrizopciones[i][j] = simbolo;
					}
			}
}
}

Tablero::Tablero(){}

void Tablero::imprimir_matriz(){
            for (int i=0; i<3; i++){
                printf("           ");
                for (int p=0; p<3; p++){
                    printf("| %c (%c) ", matrizopciones[i][p],matriz[i][p]);
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
		Tablero tbl;

public:
    Jugador(string,int, Tablero&);
    void pedir_nombre();
    void imprimir_datos();
    char obtenerletra();
};

Jugador :: Jugador(string _nombre,int _puntos, Tablero &tbl1){
    nombre = _nombre;
    puntos = _puntos;
		tbl = tbl1;
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

char Jugador :: obtenerletra(){
    cout << "Que Casilla Escogee: " << endl;
    cin >> letra;
		return letra;
	}


int main()
{
	Tablero tbl;
    Jugador jugadorreal("",0, tbl);
    Jugador jugadormaquina("Maquina",0, tbl);
    jugadorreal.pedir_nombre();
    //system("clear");
    tbl.imprimir_nombre_juego();
    jugadorreal.imprimir_datos();
    jugadormaquina.imprimir_datos();
		tbl.imprimir_matriz();
    char letra = jugadorreal.obtenerletra();
		tbl.cambiarSimbolos (letra, 'X');
    //system("clear");
    tbl.imprimir_matriz();

	return 0;
}
