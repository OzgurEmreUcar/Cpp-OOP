#include <iostream>

using namespace std;


class Kutu{

public:
Kutu(double g = 10.0, double d = 10.0, double y = 10.0);
static int nesneSayisi;

double hacim();
private:

double genislik;
double derinlik;
double yukseklik;



};


Kutu::Kutu(double g, double d , double y){
    cout << "Yapici fonksiyon cagriliyor" << endl;
    genislik = g;
    derinlik = d;
    yukseklik = y;
    nesneSayisi ++;
    
}

double Kutu::hacim(){
    return genislik*yukseklik*derinlik;
}

int Kutu :: nesneSayisi = 0;


int main() {
  
Kutu Kutu1(20,30,40);

cout << "Kutu Nesnesinin Hacmi : " << Kutu1.hacim();


Kutu Kutu2(50,60,70);

Kutu *ptrKutu;

ptrKutu = &Kutu2;

cout << "Kutu Nesnesinin Hacmi : " << ptrKutu ->hacim();

cout << Kutu :: nesneSayisi<< endl;
cout << " Olusan nesne sayisi : " << Kutu1.nesneSayisi<< endl; 
cout << " Olusan nesne sayisi : " << Kutu2.nesneSayisi << endl;  

    return 0;
}