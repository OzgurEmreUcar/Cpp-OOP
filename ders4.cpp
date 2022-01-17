#include <iostream>
#include <iomanip>
using namespace std;


class Sinif_B;
class Sinif_A{
    public:
    Sinif_A():a(110){

    };
    friend class Sinif_B;
    private:
    int a;

};

class Sinif_B{
    public:
    void getGosterA(Sinif_A &x);
    private:
    int b;
};

void Sinif_B::getGosterA(Sinif_A &x){
    cout << "Sinif_A::a="<<x.a;
}
int main(){

Sinif_A Nesne_A;
Sinif_B Nesne_B;
Nesne_B.getGosterA(Nesne_A);




    return 0;
}




