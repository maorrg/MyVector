#include "MyVector.h"
#include "Generales.h"
#include <iostream>

using namespace std;
using namespace UTEC;

MyVector::MyVector() {
    vector = nullptr;
    dimension = 0;
}


MyVector::MyVector(TipoEntero nElementos) {
    dimension = nElementos;
    vector = new TipoDataVector[dimension];
}


MyVector::~MyVector() {
    delete [] vector; //Los enteros (int) se liberan solos, por lo que no se necesita un for.
}

void MyVector::push_back(TipoDataVector valor) {
    TipoDataVector* auxiliar;
    auxiliar = new TipoDataVector[dimension+1];

    for(TipoEntero i=0;i<dimension;i++){
        auxiliar[i] = vector[i];
    }
    delete [] vector;

    vector = auxiliar;

    vector[dimension++] = valor;
}

TipoNumerico MyVector::size() {
    return dimension;
}

void MyVector::insert(TipoEntero posicion, TipoDataVector valor) {
    vector[posicion] = valor;
}

void MyVector::pop_back() {
    TipoDataVector* auxiliar;
    auxiliar = new TipoDataVector[dimension-1];

    for(TipoEntero i=0;i<dimension-1;i++){
        auxiliar[i]=vector[i];
    }
    delete[] vector;
    vector = auxiliar;

    dimension--;
}

void MyVector::erase(TipoEntero posicion) {
    TipoDataVector* auxiliar;
    auxiliar = new TipoDataVector[dimension-1];

    for (TipoEntero i = 0; i < dimension-1; i++) {
        if(i>=posicion)
            auxiliar[i] = vector[i+1];
    }
    delete[] vector;
    vector = auxiliar;

    dimension--;
}

TipoDataVector MyVector::operator[](TipoEntero n) {
    return vector[n];
}


MyVector MyVector::operator+(MyVector _vector) {
    const TipoEntero _dimension = dimension;
    TipoEntero newDimension = _dimension+(_vector.size());

    MyVector newVector(newDimension);

    for (TipoEntero i = 0; i<_dimension; i++) {
            newVector.insert(i,vector[i]);
    }


    for(TipoEntero i = _dimension;i<newDimension;i++){
        newVector.insert(i,_vector[i-_dimension]);
    }

    
    return newVector;
}


void MyVector::fill() {
    for (TipoEntero i=0;i<dimension;i++){
        vector[i] = 0;
    }
}

void MyVector::print() {
    for (TipoEntero i=0;i<dimension;i++){
        cout << vector[i];
        if(i != dimension-1) {
            cout << " - ";
        }else
            cout<< "\n";
    }
}
