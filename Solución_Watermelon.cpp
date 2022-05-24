#include <bits/stdc++.h> /// Contexto, lo veremos más adelante 
 
using namespace std; /// Contexto, lo veremos más adelante 
 
int main(){ /// Entre estas llaves debemos escribir nuestro código
	int w;
	cin>>w;
	/**
	 * Explicación: Tengo el peso w, quiero que existan dos pesos u y v
	 * tales que u+v=w, y tanto u como v sean números pares mayores que 0
	 * 
	 * Para que esto se cumpla es necesario que w sea un número par (sumar
	 * dos números pares da un número par) y mayor o igual que 4 (ya que
	 * tanto u como v son mayores o iguales que 2).
	 * 
	 * Para verificar que w sea par veo que el resto de dividir w entre 2
	 * sea 0.
	 * */
	 
	if((w%2==0) && (w>=4)){
		cout<<"YES\n";
	}else{
		cout<<"NO\n";
	}
}
