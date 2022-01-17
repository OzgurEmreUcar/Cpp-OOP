#include<iostream>



using namespace std;

class Kutu{

private:
    double uzunluk, genislik, yukseklik;
public: 
    double getHacim();
    void setDeger(double uzn, double gen, double yuk);

    Kutu operator+(const Kutu& b){
        Kutu kutu1;
        kutu1.uzunluk = this->uzunluk+b.uzunluk;
        kutu1.genislik = this->genislik+b.genislik;
        kutu1.yukseklik = this->yukseklik+b.yukseklik;
        return kutu1;

    }

};

double Kutu::getHacim(){
    return uzunluk*genislik*yukseklik;
}


void Kutu::setDeger(double uzn, double gen, double yuk){

    uzunluk = uzn;
    genislik = gen;
    yukseklik = yuk;
}




int main(){


    Kutu kutu1;
    Kutu kutu2;
    Kutu kutu3;
    double hacim = 0.00;

kutu1.setDeger(100,200,50);
hacim = kutu1.getHacim();
cout << "Kutu 1'in hacmi: " << hacim << endl;
hacim = kutu2.getHacim();
cout << "Kutu 2'in hacmi: " << hacim << endl;

kutu3 = kutu1 + kutu2;
hacim = kutu3.getHacim();
cout << "Kutu 3'ün hacmi: "<<hacim<<endl;





    return 0;
}