#include <iostream>
#include <iomanip>
using namespace std;



class Otomobil{
private:
string marka,model;
int yil;
public:


Otomobil();
~Otomobil();

};

Otomobil::Otomobil(){
    marka = "Tesla \t";
    model = "Model X\t";
    yil = 2020;
    cout << marka<<model<<yil;
}
Otomobil::~Otomobil(){
    cout << "\tnesne yok ediliyor";
};
int main(){



Otomobil otomobil1;



    return 0;
}




