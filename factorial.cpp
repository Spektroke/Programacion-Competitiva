#include <bits/stdc++.h> /// Contexto, lo veremos más adelante 

using namespace std; /// Contexto, lo veremos más adelante 

int main(){ /// Entre estas llaves debemos escribir nuestro código
	int n;
	cin>>n;
	long long factn = 1;
	/// Uso long long para tener menos 
	/// de overflow
	for(int i = 1;i<=n;i++)
		factn = factn * i;
	/// Notar que al ser una sola instrucción
	/// no necesito usar llaves.
	cout<<factn<<"\n";
	/// Probar n = 20 y n = 21
}
