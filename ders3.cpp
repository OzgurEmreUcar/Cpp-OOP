#include <iostream>

using namespace std;


class Cizgi{

int x1,x2,y1,y2;


public:

Cizgi(int x1_1, int y1_1, int x2_2, int y2_2){
    x1 = x1_1;
    x2 = x2_2;
    y1 = y1_1;
    y2 = y2_2;

    cout <<"x 1 : "<< x1 << "  y 1 : "<< y1<< "  x 2 : "<< x2 << "  y 2 : "<< y2;

}

Cizgi():x1(0),y1(0),x2(0),y2(0){
  
     cout <<"  x 1 : "<< x1 << "  y 1 : "<< y1<< "  x 2 : "<< x2 << "  y 2 : "<< y2;
}

~Cizgi(){
    cout<<"Nesne siliniyor";
}


};



int main(){


cout<<"Cizgi 1 :"<<endl;
Cizgi cizgi1(5,10,15,20);
cout << "\n"<<endl;
cout<<"Cizgi 2 :"<<endl;
Cizgi cizgi2;


cizgi1 = cizgi2;












    return 0;
}