#include <bits/stdc++.h> /// Contexto, lo veremos más adelante 

using namespace std; /// Contexto, lo veremos más adelante 

int main(){ /// Entre estas llaves debemos escribir nuestro código
	int n;
	cin>>n;
	vector<int> v(n);
	for(auto & x : v)
		cin>>x;
	/// Para leer necesito hacer una referencia
	/// porque quiero cambiar el valor almacenado
	/// en v.
	sort(v.begin(),v.end());
	for(auto x : v)
		cout<<x<<" ";
	/// Para escribir por consola en cambio no
	/// es necesario usar la referencia (aunque
	/// hacerlo no tiene ningún problema)
}

