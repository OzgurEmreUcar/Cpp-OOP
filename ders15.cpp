#include <iostream>

using namespace std;
class Kutu{
public:
double hacim();
int kutuKarsilastir(Kutu kutu);
Kutu():genislik(10),derinlik(10),yukseklik(10){};

Kutu(double g=10,double d=10,double y=10);



private: 

    double genislik;
    double derinlik;
    double yukseklik;


};
 double Kutu::hacim(){
     return genislik*derinlik*yukseklik;
 }

Kutu::Kutu(double g,double d,double y){
    cout << "Kurucu fonksiyon cagriliyor" <<endl;
    genislik = g;
    derinlik = d;
    yukseklik = y;
}

int Kutu::kutuKarsilastir(Kutu kutu){
    if( this -> hacim()  == kutu.hacim()){

        return 2;
    }else if ( this -> hacim()  != kutu.hacim()){
        return this -> hacim()   > kutu.hacim();
    }else{
        return 4;
    }

    
}

int main() {
   
   Kutu kutu1(10,20,30);
   Kutu kutu2(10,20,30);

   if(kutu1.kutuKarsilastir(kutu2) == 1){
       cout <<"kutu 2 daha  kucuktur kutu 1 den "<<endl;
   }else if(kutu1.kutuKarsilastir(kutu2) == 0){
       cout <<"kutu 1 daha kucuktur kutu 2 den "<<endl;
   }else if(kutu1.kutuKarsilastir(kutu2) == 2){
       cout <<"Kutular esittir. "<<endl;
   }

    cout << kutu1.kutuKarsilastir(kutu2);
    return 0;
}