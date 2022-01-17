#include <iostream>

using namespace std;


class A{
    public:
    A(){
        cout << "A kurucu fonksiyonu calisiyor ...." <<endl;
    }
};

class B{
   static A a;
    public:
    B(){
        cout << "B kurucu fonksiyonu calisiyor ...." <<endl;
    }
    static A getA(){
        return a;
    }
};

A B::a;

int main() {

B b1,b2,b3;
A a = b1.getA();

    return 0;
}