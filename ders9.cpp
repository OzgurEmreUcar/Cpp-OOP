#include <iostream>
#include<cstdlib>
using namespace std;



int main(){

int a,b,c;
cout << "Ayrilacak bellek boyutunu giriniz." <<endl;
cin>> a;

int *dizi_heap = (int *) malloc(a);

cout << "Dizinin kac elemanli olacagini giriniz." <<endl;
cin>> b;
if (a/4 == b || a/4 > b)
{
for (int i = 0; i < b; ++i) {
cout << i <<". elemanı giriniz." <<endl;
cin>>c;    
*(dizi_heap + i) = c;
}
for (int i = 0; i < b; ++i) {
cout << dizi_heap[i] << endl;
}
}else{
    cout<<"Dizi icin yeterince bellek ayirmadiniz" << endl;
}


free(dizi_heap);



    return 0;
}