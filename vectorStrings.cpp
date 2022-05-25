#include <bits/stdc++.h> /// Contexto, lo veremos más adelante 

using namespace std; /// Contexto, lo veremos más adelante 

int main(){ /// Entre estas llaves debemos escribir nuestro código
	vector<string> v(3);
	vector<string> v2(3,"palabra");
	/// Observar el warning que nos da el compilador
	for(int i = 0;i<v.size();i++) 
		cout<<"v[ "<<i<<" ] = "<<v[i]<<"\n";
	/// Ver que puedo usar v.size() para controlar la cantidad
	/// de iteraciones.
	for(int i = 0;i<v2.size();i++)
		cout<<"v2[ "<<i<<" ] = "<<v2[i]<<"\n";
}

