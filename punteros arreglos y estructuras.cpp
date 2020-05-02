/*
punteros y estructuras
realizar un programa para llevar el control de libros por codigo, titulo y precio.
al final mostrar el total del valor del inventario
*/
#include<iostream>
#include<string>
using namespace std;

struct libro{
	int codigo;
	string titulo;
	float precio;
};  
int main(){
	int n, i;
	float total=0.00;
	libro *base;
	cout<<"cuantos libros ingresara al inventario?: "<<endl;
	cin>>n;
	
	base= new libro[n];
	for(i=0;i<n;i++){
		cout<<"ingrese codigo de libro: "<<endl;
		cin>>base[i].codigo;
		cin.ignore();
		cout<<"ingrese titulo del libro: "<<endl;
		getline(cin,base[i].titulo);
		cout<<"ingrese precio  de  libro: "<<endl;	
        cin>>base[i].precio;
		total += base[i].precio;   
	}
	cout<<"el total del valor del inventario es de: "<<total<<endl;
	delete [] base;	
	
}
