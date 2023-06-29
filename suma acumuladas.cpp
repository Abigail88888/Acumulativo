#include<bits/stdc++.h>
using namespace;
vector<int>Generarvector(vector<int>A, int n);
vector<int>SumaAcumulada(vector<int>A, int suma);
void Mostrarvector(vector<int>A);
int main(){
	int vector<int>A;
	int n,suma;
	SumaAcumulada=suma(A);
	Mostrarvector(A);
	cout<<"Ingrese la cantidad de elementos del vector"<<endl;
	cin>>n;
	return 0;
}
vector<int>Generarvector(vector<int>A, int n){
	int i,e;
	srand(time(NULL));
	for(i=0; i<n; i++){
	e=rand()%30;
	A.push_back(e);
	}
	return A;
}
vector<int>SumaAcumulada(vector<int>A, int suma){
	vector<int>A;
	int i, suma, s=1;
	suma=A[0];
	A.push_back(A[0]);
	for(i=0; i<A.size(); i++){
		suma=suma+A[i+1];
		A.push_back(suma);
	}
	return suma;
}
void Mostrarvector(vector<int>A){
	int i;
	for(i=0; i<A.size(); i++){
		cout<<A[i]<<"/"<<endl;
	}
	return A;
}
