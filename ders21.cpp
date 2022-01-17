#include <iostream>

using namespace std;




class Tasit{
    public: 
    Tasit(){
        cout <<"Bu bir tasittir";
    }
};

class DortTeker{
    public:
    DortTeker(){
        cout << "Bu bir dört tekerli tasittir";
    }
};



class Otomobil:public Tasit,public DortTeker{

public:
    Otomobil(){
        cout << "Bu otomobil dört tekerli bir tasittir...."<< endl;
    }




};





int main(){

Otomobil oto;






    return 0;
}