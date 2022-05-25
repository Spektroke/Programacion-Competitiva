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
	cin.tie(0);
	cin.sync_with_stdio(0);
	int n;
	cin>>n;
	vector<int> v(n);
	for(auto & x : v)
		cin>>x;
	sort(v.begin(),v.end());
	int res = 1;
	for(int i = 1;i<n;i++)
		if(v[i]!=v[i-1])
			res++;
	cout<<res<<"\n";
}





