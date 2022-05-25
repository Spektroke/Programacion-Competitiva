#include <bits/stdc++.h> /// Contexto, lo veremos más adelante 

using namespace std; /// Contexto, lo veremos más adelante 

int main(){ /// Entre estas llaves debemos escribir nuestro código
	int x = 10;
	int & y = x;
	cout<<x<<" "<<y<<"\n";
	y++;
	cout<<x<<" "<<y<<"\n";
}


