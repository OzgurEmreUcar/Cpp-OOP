#include <iostream>
#include <iomanip>


using namespace std;




class Sensor{
public:
virtual string veri(int deger)=0;


};


class Sensor1 : public Sensor{
    public:
    string veri(int deger){
        return "Sensor Degeri " + deger ;
    }
};
class Hayvan{

public:
    virtual string konusma(){
        return "konusmiyor";
    }
};

class Kedi: public Hayvan{

public:
  string konusma() override{
      return "Miyav Miyav";
  }

};

class Kopek: public Hayvan{

public:
  string konusma() override{
      return "Hav Hav";
  }

};

class Kurt: public Hayvan{

public:
  string konusma() override{
      return "Ouuuuuuu Ouuuuuu";
  }

};


int main(){


Sensor s1;
cout << 







/////////////////////////////////////////////
Hayvan *ptrHayvan[3];

ptrHayvan[0] = new Kedi();
ptrHayvan[1] = new Kopek();
ptrHayvan[2] = new Kurt();

for (size_t i = 0; i < 3; i++)
{
        cout << ptrHayvan[i] -> konusma() <<endl;
}






    return 0;
}