#include <bits/stdc++.h> /// Contexto, lo veremos más adelante 

using namespace std; /// Contexto, lo veremos más adelante 

int main(){ /// Entre estas llaves debemos escribir nuestro código
	int n, suma = 0;
	cin>>n;
	for(int i = 1;i<=n;i++){
		suma = suma + i * (n/i);
	}
	cout<<suma<<"\n";
	/**
	 * Explicación:
	 * El número i es divisor de (n/i) números menores
	 * o iguales que n.
	 * 
	 * Por tanto, el número i se suma n/i veces. Sumando
	 * en total i*(n/i).
	 * */
}
 
