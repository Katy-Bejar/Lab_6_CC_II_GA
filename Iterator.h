#ifndef __ITERATOR_H__
#define __ITERATOR_H__
#include <iostream>
#include "Node.h"
using namespace std;

template <typename T>
class Iterator {
    private:
        Node<T>* Iterador;

    public:
        Iterator( Node<T> *p ) : Iterador{ p } {}

        //Sobrecarga del operador de puntero
        T operator *(){
            Node<T>* temp = this->Iterador;
            return temp->getElem();
        }

        //Antes de la sobrecarga del operador ++
        Iterator & operator++ ( ){
            Iterador = Iterador->getNext();
            return *this;
        }

        //Después de la sobrecarga del operador ++
        Iterator operator++ (int){
            Iterator old = *this;
            ++( *this );
            return old;
        }

        //Sobrecarga del operador de asignación
        bool operator== (const Iterator& s)const{
            return Iterador == s.Iterador;
        } 
        
        //Sobrecarga de operadores de desigualdad
        bool operator!= (const Iterator& a)const{
            return !(*this == a);  
        }
};

#endif