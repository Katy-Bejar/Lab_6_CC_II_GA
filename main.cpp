#include <iostream>
#include "Node.h"
#include "LinkedList.h"
#include "Iterator.h"
using namespace std;

int main(){
    LinkedList<string> lista;
    lista.push_front("Carlos");
    lista.push_front("Luisa");
    lista.push_back("Carmen");
    lista.push_back("Mario");
    lista.push_front("Nadia");
    lista.push_front("Juan");
	cout << lista << endl;

    lista.removeByPosition(2);
    cout << lista << endl;

    lista.pop_front();
    cout << lista << endl;

    lista.push_back("Fabiola");
    cout << lista << endl;

    lista.push_back("Luis");
    cout << lista << endl;

    lista.push_front("Pedro");
    cout << lista << endl;

    lista.pop_front();
    cout << lista << endl;

    //LinkedList<string> list;
    Iterator<string> it(lista.begin());
    for (it = lista.begin(); it != lista.end(); it++){
        cout << *it << endl;
    }
    cout << endl;
    LinkedList b = move(lista);
    cout << "Lista b llamando al constructor de movimiento: \n" << b;

    cout << endl;

    cout << "Lista: " << lista;

    return 0;
}