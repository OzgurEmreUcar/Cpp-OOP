#include<iostream>



using namespace std;


class agirlik{
private:
int kilo;
float gram;
public:
void setDeger();
void getDeger();
agirlik():kilo(0), gram(0.0){}
agirlik(float ag){
    kilo = (int)ag;
    gram = 1000*(ag-kilo);
}
agirlik(int k, float g):kilo(k),gram(g){}




};

void agirlik::setDeger(){
    cout <<"\n kilo gir : ";
    cin >>kilo;

    cout << "\n gram gir : ";
    cin >> gram;

}

void agirlik::getDeger(){
    cout << kilo << "kilo" << gram << "gramdir" << endl;

}


int main(){

agirlik *ap;
ap = new agirlik;

ap->setDeger();
cout <<"\n ----------> agirlik nesnesi için <------------\n";
ap->getDeger();


cout << sizeof(ap) <<endl;
delete ap;

    return 0;
}