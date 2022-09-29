#ifndef Grafica_h_include
#define Grafica_h_include

#define Max 20

class Grafica{
	
	int MatrizAd(Max)(Max);
	int NumVer, Vert(Max);
	
	public:
		Grafica();
		int Minimo(int,int);
		int Maximo(int,int);
		//Se va a pedir la cantidad de vertice, aristas, conexiones y a que costo 
		void Leer(); 
		//Algoritmo
		void Kruskall();
};
#endif
