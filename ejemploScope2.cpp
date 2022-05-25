#include <bits/stdc++.h> /// Contexto, lo veremos más adelante 

using namespace std; /// Contexto, lo veremos más adelante 

int main(){ /// Este es el scope de y
	int y = 0;
	{ /// Este es el scope de x
		int x = 1;
		y = x;
		/// Modifico el contenido de y porque estoy 
		/// dentro del scope de y 
	}
	cout<<y<<"\n";
}
 
