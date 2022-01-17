#include<iostream>



using namespace std;

class Ogrenci{

private:
int not1 = 5;

 
public: 
  
  Ogrenci operator++(){
      this->not1  + 5;
      cout << this -> not1;
  }

};





int main(){

Ogrenci deneme.operator++();






    return 0;
}
