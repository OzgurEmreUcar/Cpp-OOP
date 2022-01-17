#include<iostream>
#include<iomanip>



using namespace std;


class poly{
    public:
    poly();
};


poly::poly(){
    cout<< "Polymorphism sinifi"<<endl;

}



class sinif1:public poly{
    public:
    sinif1();

};


sinif1::sinif1(){
    cout <<"Birinci class calisti .... "<<endl;


}

class sinif2:public poly{
    public:
    sinif2();

};


sinif2::sinif2(){
    cout <<"Ikinci class calisti .... "<<endl;


}

int main(){

    



    return 0;
}