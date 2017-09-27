//
// Created by thiago on 07/03/17.
//

#include <iostream>
using namespace std;
#include "Fila.h"

class Fila {

private:
    int *vetor;
    static int quantidadeDeNumeros = 0;

public:
    void enqueue(int numero) {

    }
    void dequeue(int numero) {

    }
    int size() {
        return this->quantidadeDeNumeros;
    }
    bool isEmpty() {
        return this->size() == 0;
    }
    int front() {
        return *this->vetor;
    }

};