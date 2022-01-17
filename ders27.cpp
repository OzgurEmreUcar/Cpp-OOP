#include <iostream>
#include <iomanip>
using namespace std;
class Zaman{
public:
    void gosterZaman();
    Zaman(){
        saat=0;
        dakika=0;
    }
    Zaman(int s, int d){
        saat = s;
        dakika = d;
    }
    Zaman operator++(){
        ++dakika;
        if (dakika>=60){
            ++saat;
            dakika-=60;
        }
        return Zaman(saat, dakika);
    }
    Zaman operator++(int){
        Zaman Z(saat,dakika);
        ++dakika;
        if (dakika>=60){
            ++saat;
            dakika-=60;
        }
        return Z;
    }


    void timerF(int saat){
        Zaman Z1(00,00);
     Z1.gosterZaman();
        for(int i = 1; i <=saat*60; i++ ){
        ++Z1;
        Z1.gosterZaman();
        }
    }
private:
    int saat;
    int dakika;
};

void Zaman::gosterZaman() {
    cout << setw(2) << setfill('0')<< saat << " : " << setw(2) << setfill('0') << dakika << endl;
// setw(2) << setfill('0') ifadesi 00:00 daki dijiti gösterebilmek için yazıldı
}

int main() {
    
   Zaman deneme;
   deneme.timerF(1);

    return 0;
}