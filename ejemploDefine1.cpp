#include <bits/stdc++.h> 
/** 
 * Ahora que sabemos lo que es el preprocesador:
 * el #include le dice que busque ese archivo (que es 
 * otro código en C++) y lo ponga en el nuestro en el
 * lugar donde está el #include.
 * Puntualmente, bits/stdc++.h es un archivo
 * que contiene todas la biblioteca estandar de C++.
 * */
 
using namespace std; /// Contexto, lo veremos más adelante 
#define ll long long
#define pb push_back
#define inf 1000000000
/// La barra indica que queremos seguir en la siguiente línea.
#define multilinea int x = 1;\ 
				   int y = 2;  	
int main(){ 
	ll variable = inf;
	/// Dinde dice ll lo cambia por long long
	/// Donde dice inf lo cambia por 1000000000
	cout<<variable<<"\n";
	variable = variable * variable;
	cout<<variable<<"\n";
	
	vector<ll> v;
	v.pb(inf);
	/// Donde dice pb lo cambia por push_back
	cout<<v[0]<<"\n";
	
	multilinea
	/**
	 * Reemplaza multilinea por :
	 * int x = 1;
	 * int y = 2;
	 * */
	cout<<x<<" "<<y<<"\n";
}


