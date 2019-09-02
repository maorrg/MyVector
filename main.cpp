#include <iostream>
#include <cassert>
#include <string>
#include "MyVector.h"
#include "Generales.h"

using namespace std;
using namespace UTEC;




int main() {

    TipoEntero n = 20;

    MyVector v1(n);
    v1.fill();

    v1.push_back(23);

    v1.print();

    v1.insert(1,22);


    v1.print();

    v1.print();


    (v1+v1).print();


    /*

    assert(v1.size() == 0);

    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);

    assert(v1.size() == 3);

    MyVector v2;
    MyVector v3 = v1 + v2;

    assert(v3.size() == 3));


    int total =0;
    for(int i=0;1<v1.size();++i)
        total+=v1[1];

    assert(total ==60);

    std::string resultado;

    try{
        v1.insert(10,10);
    }

    catch (const exception& e){
        resultado = e.what();
    }

    assert(resultado == "Fuera de limite");

     */

    return 0;
}