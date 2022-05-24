#include <bits/stdc++.h> /// Contexto, lo veremos más adelante 
 
using namespace std; /// Contexto, lo veremos más adelante 
 
int main(){ /// Entre estas llaves debemos escribir nuestro código
	bool x,y;
	cin>>x>>y;
	
	/// Primero veamos el contenido de cada variable y su negación.
	cout<<"El valor de x es "<<x<<" y el valor de !x es "<<!x<<"\n";
	cout<<"El valor de y es "<<y<<" y el valor de !y es "<<!y<<"\n";
	
	/// Ahora veamos el resultado de aplicar cada uno de los operadores
	/// lógicos con estas variables. 
	/// Recordar que (x && y) es lo mismo que (y && x)
	cout<<"El valor de x || y es "<<(x || y)<<"\n";
	cout<<"El valor de x && y es "<<(x && y)<<"\n";
	cout<<"El valor de x ^ y es "<<(x ^ y)<<"\n";
	
	/// Veamos cómo podemos usar esto para condicionales
	
	if(x){ 
	/// Como x tiene un valor de verdad puedo usarlo como condición
	/// en un if.
		cout<<"x es verdadero\n";
	}
	
	if(y){
		cout<<"y es verdadero\n";
	}
	
	if(x || y){
		cout<<"Al menos uno de los 2 es verdadero\n";
	}
	
	if(x && y){
		cout<<"Ambos son verdaderos\n";
	}
	
	if(x ^ y){
		cout<<"Uno es verdadero y el otro es falso\n";
	}
}
