#include<iostream>
using namespace std;

int main(){
	
	int i,j,s,a[3][4];
	
	
	for(i=0;i<3;i++){
		
		
		for(j=0;j<4;j++){
			
			cout<<"inserisci valore : "<<endl;
			
			cin>>a[i][j];}}
			
		s=0;
		
	
	for(i=0;i<3;i++){
		
		
		for(j=0;j<4;j++){
			
			if(a[i][j]%2==0)
			
			s=s+a[i][j];}}
			
		cout<<"la somma dei numeri pari e': "<<s<<endl;
	
	system("pause");
	
	return 0;
}
