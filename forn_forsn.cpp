#include <bits/stdc++.h> 
/** 
 * Ahora que sabemos lo que es el preprocesador:
 * el #include le dice que busque ese archivo (que es 
 * otro código en C++) y lo ponga en el nuestro en el
 * lugar donde está el #include.
 * Puntualmente, bits/stdc++.h es un archivo
 * que contiene todas la biblioteca estandar de C++.
 * */
 
 
#define forsn(i,s,n) for(int i = int(s);i<int(n);i++)
/// i recorre [s,n)
#define dforsn(i,s,n) for(int i = int(n)-1;i>=int(s);i--)
/// i recorre [s,n) al reves

#define forn(i,n) forsn(i,0,n)
/// Notar que puedo usar un define al describir otro define
/// i recorre [0,n)
#define dforn(i,n) dforsn(i,0,n)
/// i recorre [0,n) al reves

using namespace std; /// Contexto, lo veremos más adelante 

int main(){ 
	cout<<"Inicia forn(x,3)\n";
	forn(x,3) cout<<"x vale "<<x<<"\n";
	cout<<"Inicia dforn(x,3)\n";
	dforn(x,3) cout<<"x vale "<<x<<"\n";

	cout<<"Inicia forsn(z,7,10)\n";
	forsn(z,7,10) cout<<"z vale "<<z<<"\n";
	cout<<"Inicia dforsn(z,7,10)\n";
	dforsn(z,7,10) cout<<"z vale "<<z<<"\n";
}



