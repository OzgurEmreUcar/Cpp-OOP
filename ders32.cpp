#include <iostream>
using namespace std;

template<typename T>
 T* diziYazTers(T Dizi[], int elemanSayisi){
     T* ptr;
    ptr = &Dizi[elemanSayisi-1];
     for(int i = 0 ; i< elemanSayisi ; i++){
        cout << " " <<*ptr;
        *ptr--;
         
     }
     cout << endl;
    return Dizi;
}

int main(){

int denemeDizi[9] = {1,2,3,4,5,6,7,8,9};
char denemeDizi1[3] = {'a','b','c'};
float denemeDizi2[4] = {1.2,2.5,3.3,4.7};
diziYazTers<int>(denemeDizi,9);
diziYazTers<char>(denemeDizi1,3) ;
diziYazTers<float>(denemeDizi2,4) ;

    return 0;
}