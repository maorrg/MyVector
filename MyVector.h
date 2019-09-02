#ifndef ESTRUCTURA_MYVECTOR_MYVECTOR_H
#define ESTRUCTURA_MYVECTOR_MYVECTOR_H

#include "Generales.h"

namespace UTEC {

    class MyVector {
    private:
        TipoEntero dimension = 0;
        TipoDataVector *vector;

    public:
        MyVector();

        MyVector(TipoEntero);

        virtual ~MyVector();

        void push_back(TipoDataVector);

        TipoNumerico size();

        void insert(TipoEntero posicion, TipoDataVector valor);

        void pop_back();

        void erase(TipoEntero);

        TipoDataVector operator[](TipoEntero);

        MyVector operator+(MyVector);

        void fill();

        void print();

    };

};


#endif //ESTRUCTURA_MYVECTOR_MYVECTOR_H
