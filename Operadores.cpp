#include <bits/stdc++.h> /// Contexto, lo veremos más adelante 
 
using namespace std; /// Contexto, lo veremos más adelante 
 
int main(){ /// Entre estas llaves debemos escribir nuestro código
	int x = 5, y = 6; 
	/// cin>>x>>y; /// Probar agregando y quitando esta línea
	int z = x+y;
	cout<<"z contiene "<<z<<"\n"; 
	/// El carácter \n se usa para terminar una línea.
	int u = y-x, v = x-y;
	cout<<"u contiene "<<u<<" y v contiene "<<v<<endl;
	/// endl es otra forma de terminar una línea.
	/// pero en general conviene más usar "\n" o '\n'
	int w = (z+1)*5;
	cout<<"w contiene "<<w<<'\n';
	/// Ahora veamos el operador de división
	cout<<y<<" / "<<x<<" = "<<y/x<<'\n';
	cout<<x<<" / "<<y<<" = "<<x/y<<'\n';
	/// Podemos imprimir el valor sin guardarlo en una variable
}
