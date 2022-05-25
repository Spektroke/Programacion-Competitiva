#include <bits/stdc++.h> /// Contexto, lo veremos más adelante 

using namespace std; /// Contexto, lo veremos más adelante 

int main(){ /// Entre estas llaves debemos escribir nuestro código
	string s;
	cin>>s;
	for(int i = 0;i<int(s.size());i++){
		if('A'<=s[i] && s[i]<='Z'){
		/// Recordar que las letras mayusculas tienen
		/// codigos ASCII consecutivos y estan en orden alfabetico.
			cout<<"En la posicion "<<i<<" hay una mayuscula \n";
		}
	}
}

