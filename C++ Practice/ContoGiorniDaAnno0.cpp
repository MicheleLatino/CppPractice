#include <iostream>
using namespace std;
struct MiaData{
    int gg;
    int mm;
    int aaaa;
};
int controlloData(MiaData pd);
int controlloGiorno(int pi, int pf, int pg);
int controlloBisestile(MiaData pd);
int SommaGiorni1(MiaData pd);
int SommaGiorni2(MiaData pd);
int SommaGiorni3(MiaData pd);

int main(){
    MiaData d2;
    int s1,s2,s3,st;
    cout<<"Inserire Giorno"<<endl;
    cin>>d2.gg;
    cout<<"Inserire Mese"<<endl;
    cin>>d2.mm;
    cout<<"Inserire Anno"<<endl;
    cin>>d2.aaaa;
    cout<<d2.gg<<" "<<d2.mm<<" "<<d2.aaaa<<endl;
    int con = controlloData(d2);
    cout<<con<<endl;
    if(con==1){
    s1=SommaGiorni1(d2);
    cout<<"giorni per gli anni: "<<s1<<endl;
    s2=SommaGiorni2(d2);
    cout<<"giorni per mesi rimasti: "<<s2<<endl;
    s3=SommaGiorni3(d2);
    cout<<"giorni per giorni rimasti:  "<<s3<<endl;
    st=s1+s2+s3;
    cout<<"somma giorni dalla anno 0 al "<<d2.gg<<" "<<d2.mm<<" "<<d2.aaaa<<"= "<<st<<endl;
	}
}

int controlloData(MiaData pd){
    int esito=0;
    if(pd.aaaa>=0){
        esito=controlloBisestile(pd);
        if(pd.mm==4 || pd.mm==6 || pd.mm==9 || pd.mm==11){
                esito=controlloGiorno(1,30,pd.gg);
            }else{
                esito=controlloGiorno(1,31,pd.gg);
            }}
    return esito;
}

int controlloGiorno(int pi, int pf, int pg){
    int risultato =0;
    if(pg>=pi && pg<=pf){
        risultato=1;
    }
    return risultato;
}
int controlloBisestile(MiaData pd){
	int esito,b;
	if(pd.mm==2){
            if((pd.aaaa%4==0 && pd.aaaa%100!=0) ||pd.aaaa%400==0){
                esito=controlloGiorno(1,29,pd.gg);
                b=1;
                }else{
                esito=controlloGiorno(1,28,pd.gg);
                b=0;}}
    return b;
}


int SommaGiorni1(MiaData pd){
	int s1=0,v,i;
	for(i=0;i<pd.aaaa;i++){
    v=controlloBisestile(pd);
    if (v==1){
    	s1=s1+365;
	}
	else
	    s1=s1+364;
	}
	return s1;
}


int SommaGiorni2(MiaData pd){
	int s2=0,v,i;
	for(i=0;i<pd.mm;i++){
	    if(i==4 || i==6 || i==9 || i==11){
	    	s2=s2+30;
		} else if(i==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i==12)
	                   s2=s2+31;       
          else if(i==2){
        	    v=controlloBisestile(pd);
    	        if(v==1){
    	           s2=s2+29;}
	            else{
	               s2=s2+28;}}}
	return s2;
}
int SommaGiorni3(MiaData pd){
	int s3=0,i;
	for(i=1;i<=pd.gg;i++){
		s3++;
	}
	return s3;
}

