#include <iostream>

using namespace std;



class Kredi{


public:
Kredi(int t = 1, int f = 1);
void setTutar(int t);
void setFaiz(int f);


protected:
int Tutar,Faiz;



};
Kredi::Kredi(int t , int f ){
    cout << "nesne olusturuluyor";
    Tutar = t;
    Faiz = f;
}

void Kredi::setTutar(int t){
    Tutar = t;
}
void Kredi::setFaiz(int f){
    Faiz = f;
}

class TasitKredisi : public Kredi{

private:
int Vade;
public:
void setVade(int v);
TasitKredisi(int v = 1);

int getKrediHesapla(){


int getiri = (Tutar*(Faiz/100))*Vade;
return getiri;

}
};
void TasitKredisi::setVade(int v){
    Vade = v;
}
TasitKredisi::TasitKredisi(int v  ){
    cout << "nesne olusturuluyor";
    Vade = v;
  
}

int main(){


TasitKredisi t1(12);

t1.setFaiz(25);
t1.setTutar(12);
int deneme = t1.getKrediHesapla();
cout <<"   "<< deneme;






    return 0;
}