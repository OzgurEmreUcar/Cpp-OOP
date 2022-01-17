#include <iostream>


using namespace std;


class Memeli{
public:
    Memeli(){
        cout<<"Memeli hayvan"<<endl;
    }
};

class kanatliHayvan{
public:
    kanatliHayvan(){
        cout<<"Kanatli hayvan "<<endl;
    }
};

class Yarasa : public Memeli,public kanatliHayvan{
public:
    Yarasa(){
        cout <<"Yarasa kanatli bir memeli hayvandir"<<endl;
    }
};


int main(){

Yarasa y1;

    return 0;
}