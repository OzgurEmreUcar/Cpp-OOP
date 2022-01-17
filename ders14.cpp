#include <iostream>

using namespace std;

class kisiBoy {
private:
    int metre;
    float santimetre;;
public:
    void setDeger();

    void getDeger();

    kisiBoy() : metre(0), santimetre(0.0) {}

    kisiBoy(float a) {
        metre = (int) a;
        santimetre = 100 * (a - metre);
    }

    kisiBoy(int k, float g) : metre(k), santimetre(g) {}
};

void kisiBoy::setDeger() {
    cout << "\n Boyunuzun kac metre oldugunu giriniz  :";
    cin >> metre;
    cout << "\n Boyunuzun kac santimetre oldugunu giriniz  :";
    cin >> santimetre;
}

void kisiBoy::getDeger() {
    cout <<" Boy "<< metre << " metre " << santimetre << " santimdir" << endl;
}


int main() {
    kisiBoy *ap;
    ap = new kisiBoy;
    ap->setDeger();
    cout << "\n -----> agirlik nesnesi icin<------\n";
    ap->getDeger();

    cout << sizeof(kisiBoy) << endl;

    delete ap;

    return 0;
}