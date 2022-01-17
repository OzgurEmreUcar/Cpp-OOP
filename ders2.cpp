#include <iostream>

using namespace std;
class Hey{
public:
    string username;
    string password;
    string id;
    string job;



};
int main(){

Hey Kullanicilar[2];

for(int i=0;i<2;i++){

cout << "Type username"<<endl;
cin >> Kullanicilar[i].username;
cout << "Type password"<<endl;
cin >> Kullanicilar[i].password;
cout << "Type id"<<endl;
cin >> Kullanicilar[i].id;
cout << "Type job"<<endl;
cin >> Kullanicilar[i].job;


}
  for (size_t i = 0; i < 2; i++)
  {

cout<< Kullanicilar[i].username << endl;

cout<< Kullanicilar[i].password <<endl;

cout<< Kullanicilar[i].id<<endl;

cout<< Kullanicilar[i].job <<endl;

cout<<"\n\n";

  }
  
  
    
    
    
    
    
    
    return 0;
}