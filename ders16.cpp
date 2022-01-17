#include <iostream>

using namespace std;


class Demo{

private:
int sayi;
char karakter;


public:

Demo &setSayi(int sayi){

this -> sayi = sayi;

return *this;

}
Demo &setKarakter(int karakter){

this -> karakter = karakter;

return *this;

}
void yaz(){
    cout << "Sayi = "<< sayi << "  Karakter = "<< karakter<< endl;
}

};
int main() {
  
Demo nesne;
nesne.setSayi(200).setKarakter('M');
nesne.yaz();



    return 0;
}