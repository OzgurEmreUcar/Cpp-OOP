#include <iostream>

using namespace std;


int *olusturDizi(int boyut){
    int Dizi[boyut];
    return Dizi;
}

int main(){

int s = 10;
int *Dizi = olusturDizi(s);

for (int i = 0; i < s; i++)
{
   Dizi[i] = i;
}

for (int i = 0; i < s; i++)
{
  cout<< Dizi[i]<< endl; 
}
    return 0;
}