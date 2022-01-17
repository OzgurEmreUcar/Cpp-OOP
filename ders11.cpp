#include <iostream>
#include<cstdlib>
using namespace std;



int main(){

int b,c;



cout << "Dizinin kac elemanli olacagini giriniz." <<endl;
cin>> b;

int *dizi_n = new int[b];

for (int i = 0; i < b; ++i) {
cout << i <<". elemani giriniz." <<endl;
cin>>c;    
*(dizi_n + i) = c;
}
for (int i = 0; i < b; ++i) {
cout << dizi_n[i] << endl;
}



delete[] dizi_n;



    return 0;
}