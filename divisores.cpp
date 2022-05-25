#include <bits/stdc++.h> /// Contexto, lo veremos más adelante 

using namespace std; /// Contexto, lo veremos más adelante 

int main(){ /// Entre estas llaves debemos escribir nuestro código
	int n;
	cin>>n;
	for(int i = 1;i<=n;i++){
		if(n%i==0){
			/// n%i == 0 si n es multiplo de i
			/// lo que es lo mismo que decir que 
			/// i es un divisor de n
			cout<<i<<" divide a "<<n<<"\n";
		}
	}
}
