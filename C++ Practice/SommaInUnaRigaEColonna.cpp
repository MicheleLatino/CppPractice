#include<iostream>
using namespace std;

int main(){
	
	int i,j,s,p,q,r,c,a[3][4];
	
	
	for(i=0;i<3;i++){
		
		
		for(j=0;j<4;j++){
			
			cout<<"inserisci valore : "<<endl;
			
			cin>>a[i][j];}}
			
			
	do{
	    cout<<"inserisci la riga:"<<endl;
	
	    cin>>p;}while (p<0 || p>2);
		
	do{
		
		cout<<"inserisci la colonna :"<<endl;
		
		cin>>q;}while (q<0 || q>3);		
	
	r=0;
	
	c=0;
	
	
	for(i=0;i<3;i++){
		
		j=q;
		
		if (j==q)
		
		   c=c+a[i][q];
		
		
		for(j=0;j<4;j++){
			
			if (i==p)
			
			    r=r+a[p][j];
		}}
		   
	cout<<"somma nella riga: "<<r<<endl;
	
	cout<<"somma nella colonna"<<c<<endl;
	
	system("pause");
	
	return 0;}
	
