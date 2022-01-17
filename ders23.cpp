#include<iostream>





class sayi{


public: 
    int deger;
    sayi(){}
    ~sayi(){}
    sayi(int s1){
        deger = s1;
    }
    sayi operator+(sayi s2){
        sayi toplam;
        toplam.deger = deger + s2.deger;
        return (toplam);
    }


};




using namespace std;
int main(){


sayi sayi1(10);
sayi sayi2(20);
sayi sayi3;



sayi3 = sayi1+sayi2;

cout << sayi3.deger;




    return 0;
}