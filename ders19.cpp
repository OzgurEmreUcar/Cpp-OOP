#include <iostream>

using namespace std;



class Sekil{

public:
Sekil(int g = 1, int y = 1);
void setGenislik(int g);
void setYukseklik(int y);
protected:
int genislik,yukseklik;

};

Sekil::Sekil(int g , int y ){
    cout << "nesne olusturuluyor";
    yukseklik = y;
    genislik = g;
}

void Sekil::setGenislik(int g){
    genislik = g;
}
void Sekil::setYukseklik(int y){
    yukseklik = y;
}

class Dikdortgen : public Sekil{
public: 
Dikdortgen(int g =2,int y =3){
    genislik = g;
    yukseklik =y;
}


int getAlan(){
    return genislik*yukseklik;
}
};

int main(){
Dikdortgen D1;
cout << "Dikdörtgenin alanı" << D1.getAlan()<<endl;
D1.setGenislik(10);
D1.setYukseklik(5);
cout << "Dikdörtgenin alanı" << D1.getAlan()<<endl;

    return 0;
}