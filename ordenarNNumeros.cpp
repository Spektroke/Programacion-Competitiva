#include <bits/stdc++.h> /// Contexto, lo veremos más adelante 

using namespace std; /// Contexto, lo veremos más adelante 

int main(){ /// Entre estas llaves debemos escribir nuestro código
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i = 0;i<n;i++)
		cin>>v[i];
	/// Puedo leer directamente en las posiciones
	/// porque ya están creadas
	sort(v.begin(),v.end());
	for(int i = 0;i<n;i++)
		cout<<v[i]<<" ";
}

