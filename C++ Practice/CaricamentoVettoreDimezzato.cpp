#include<iostream>
using namespace std;

struct Prodotto {
	string categoria;
	string nome;
	float prezzo;
	};


void CaricaVettore(Prodotto pa[], int pn);
void VisualizzaVettore(Prodotto pa[], int pn);
void CaricaPosizioniDispari(Prodotto pa[],Prodotto pb[], int pn);


int main(){
	Prodotto a[6],b[3];
	
	CaricaVettore(a,6);
	VisualizzaVettore(a,6);
	CaricaPosizioniDispari(a,b,6);
	VisualizzaVettore(b,3);
	}

void CaricaVettore(Prodotto pa[],int pn){
	int i;
	for(i=0;i<pn;i++){
        cout<<"Categoria: ";
        getline(cin,pa[i].categoria);
        cout<<"nome: ";
        getline(cin,pa[i].nome);
        cout<<"prezzo: ";
        cin>>pa[i].prezzo;
        cin.ignore();
		}
	}

void VisualizzaVettore(Prodotto pa[],int pn){
	int i;
	for(i=0;i<pn;i++){
		cout<<"prodotto"<<endl;
		cout<<pa[i].categoria<<" "<<pa[i].nome<<""<<pa[i].prezzo<<endl;
	}
}

void CaricaPosizioniDispari(Prodotto pa[],Prodotto pb[],int pn){
	int i,j;
	j=0;
	for(i=1;i<pn;i=i+2){
		pb[j]=pa[i];
		j++;
	}
}

