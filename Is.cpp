
#include <string>
#include "Is.h"
using namespace std;
const std::basic_string<char>&Isotope::getName()const{
    return name;
}
void Isotope::setName(const std::basic_string<char>&name){
    Isotope::name=name;
}
double Isotope::getA()const{
    return a;
}
void Isotope::setA(const std::basic_string<char>&name){
    return a=a;
}
int Isotope::getIz()const{
    return iz;
}
void Isotope::setIz(int iz){
    Isotope::iz=iz;
}
int Isotope::getN()const{
    return n;
}
void Isotope::setN(int n){
    Isotope::n=n;
}
double Isotope::getFm()const{
    return fm;
}
void Isotope::setFm(double fm){
    Isotope::fm=fm;
}
Isotope:Isotope(string name,double a,int n,double fm):name(name),a(a),iz(iz),n(n),fm(fm){}
Isotope::Isotope(){}