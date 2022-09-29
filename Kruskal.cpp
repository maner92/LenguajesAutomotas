#include "Grafica.h"
#include <iostream>

using namespace std;

	Grafica::Grafica()
	{
		
		int i1,i2;
		
		for(i1=0;i2<Max;i1++)
		{
			
			for(i2=0;i2<Max;i2++)
			{
				
				if(i1!=i2){
					MatrizAd(i1)(i2)=999;
				}
				else
					MatrizAd(i1)(i2)=0;
			}
		}
		Nver=0;
	}
	
	int Grafica::Minimo(int v1, int v2)
	{
		int Mini=v1;
		if(v2>Min)
			Mini=v2;
		return Min;
	}
	
	int Grafica::Maximo(int v1, int v2)
	{
		int Maxi=v1;
		if(v2>Min)
			Maxi=v2;
		return Maxi;
	}
	
	void Grafica::Leer(){
		
		int Ari,Cos,Ind,Orig,Dest;
		cout<<"Ingresa el total de vertices de la grafica: ";
		cin>>Nver;
		
		for(Ind=0;Ind<Nver;Ind++)
		{
			cout<<"\nIngresa el vertice: ";
			cin>>Vert(Ind);
		}
		cout<<"\nIngrese el total de aristas: ";
		cin>>Ari;
		Ind=0;
		while(Ind<Ari)
		{
			cout<<"\nVertice de Origen: "
			cin>>Orig;
			cout<<"\nVertice de Destino: "
			cin>>Dest;
			cout<<"\nCosto de "<<Orig<<" a "<<Dest<<": ";
			cin>>Cos;
			MatrizAd(Orig-1)(Dest-1)=Cos;
			MatrizAd(Dest-1)(Orig-1)=Cos;
			Ind++;
		}
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
