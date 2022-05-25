#include <bits/stdc++.h> /// Contexto, lo veremos más adelante 

using namespace std; /// Contexto, lo veremos más adelante 

int main(){ /// Entre estas llaves debemos escribir nuestro código
	int suma = 0,numero;
	do{
		cin>>numero;
		suma = suma+numero;
	}while(numero!=0);
	cout<<"La suma de los numeros ingresados es "<<suma<<"\n";
}
