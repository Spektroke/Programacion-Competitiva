#include <bits/stdc++.h> /// Contexto, lo veremos más adelante 

using namespace std; /// Contexto, lo veremos más adelante 

int main(){ /// Entre estas llaves debemos escribir nuestro código
	int n;
	cin>>n;
	{ /// Scope de todo el proceso
		int i = 1; /// inicio
		while(i<=n){ /// condicion
			/// Scope de cada ejecución del cuerpo
			cout<<i<<"\n"; /// cuerpo
			i++; /// paso 
			/// (también llamado incremento)
		}
	}
}
