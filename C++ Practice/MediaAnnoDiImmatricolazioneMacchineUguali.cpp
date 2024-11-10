#include<iostream>
using namespace std;

struct Auto{
	string marca;
	string modello;
	int adi;
	};

void CaricaVettore(Auto pa[],int pn);
int VisualizzaMedia(Auto pa[],int pn);

int main(){
	Auto a[2];
	float media;
	CaricaVettore(a,2);
	media=VisualizzaMedia(a,2);
	cout<<"la media degli anni di immatricolazione e' : "<<media;
}

void CaricaVettore(Auto pa[],int pn){
	int i;
	for(i=0;i<pn;i++){
		cout<<"inserire marca: ";
		getline(cin,pa[i].marca);
		cout<<"inserire modello: ";
		getline(cin,pa[i].modello);
		cout<<"inserire anno di immatricolazione: ";
		cin>>pa[i].adi;
		cin.ignore();
		}
	}
	
int VisualizzaMedia(Auto pa[],int pn){
	int i,m,k,s;
	string b;
	
	k=0;
	s=0;
	
	cout<<"inserire marca da cercare: ";
	getline(cin,b);
	
	
	for(i=0;i<pn;i++){
		if(pa[i].marca==b){
			s=s+pa[i].adi;
			k++;
		}
	}
	m=s/k;
	return m;
}
