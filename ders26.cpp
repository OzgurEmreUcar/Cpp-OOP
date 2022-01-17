#include<iostream>



using namespace std;

class Ogrenci{

private:
int not1 = 0;

string ad,soyad;
 
public: 
  

void  setAdSoyad  (string a, string s){
    ad = a;
    soyad = s;
}
void operator++(){
      this->not1 = this->not1  + 5;
      cout << this -> not1<<endl;
      cout << ad <<  endl;
      cout << soyad <<  endl;
}

};

int main(){

Ogrenci Ozgur;
Ozgur.setAdSoyad("Ozgur","Ucar");
++Ozgur;
cout << "\n";
++Ozgur;

    return 0;
}
