#include<fstream>
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double kiek, kaina, bendra_suma=0, bendrai=0,x;
    ifstream fd("duom.txt");
    for(int i=0;i<4;i++){
        fd >> kaina >> kiek;
        bendra_suma = bendra_suma + (kiek * kaina); bendrai = bendrai + kiek;}
    cout<< fixed<<setprecision(2)<< "Bendrai parduota " << bendrai << " o bendra suma " << bendra_suma << endl;
    return 0;   
}