#include <bits/stdc++.h> /// Contexto, lo veremos más adelante 

using namespace std; /// Contexto, lo veremos más adelante 

int main(){ /// Entre estas llaves debemos escribir nuestro código
	vector<int> v;
	int n;
	cin>>n;
	for(int i = 0;i<n;i++){
		int x;
		cin>>x;
		v.push_back(x);
	}
	
	for(int i = 0;i<n;i++)
		cout<<v[i]<<"\n";
	
}

