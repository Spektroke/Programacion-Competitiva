#include <bits/stdc++.h> /// Contexto, lo veremos más adelante 
 
using namespace std; /// Contexto, lo veremos más adelante 
 
int main(){ /// Entre estas llaves debemos escribir nuestro código
	char c;
	cin>>c;
	/// Si quiero castear un valor a un cierto tipo, puedo hacer tipo(valor)
	cout<<"El código ASCII del carácter "<<c<<" es "<<int(c)<<"\n";
	/// Al hacer una suma entre un carácter y un entero C++ castea
	/// el resultado a entero automáticamente
	cout<<"El siguiente caracter tiene ASCII "<<c+1<<"\n";
	
	/// Para recuperar el carácter debemos castearlo a carácter manualmente
	cout<<"El siguiente caracter es "<<char(c+1)<<"\n";
	
	int ascii;
	cin>>ascii;
	/// Es posible que el carácter sea invisible
	cout<<"El caracter con ASCII "<<ascii<<" es "<<char(ascii)<<"\n";
}
