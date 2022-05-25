#include <bits/stdc++.h> /// Contexto, lo veremos más adelante 

using namespace std; /// Contexto, lo veremos más adelante 

int main(){ /// Entre estas llaves debemos escribir nuestro código
	int n, suma = 0;
	cin>>n;
	for(int numero = 1;numero<=n;numero++)
		for(int divisor = 1;divisor<=numero;divisor++)
			if(numero%divisor==0)
				suma = suma + divisor;
	/// Notar que podemos considerar el ciclo y su cuerpo
	/// como una sola instrucción y anidarlos sin usar llaves
	cout<<suma<<"\n";
	/// Puedo usar el /** */ para comentarios de varias líneas.
	/**
	 * Algo interesante de este problema es que puede
	 * resolverse utilizando un solo ciclo.
	 * */
}
 
