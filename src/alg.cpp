// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
    uint64_t k = 0;
    for (uint64_t i = 2; i <= (value / 2); i++) {
        if (value % i == 0) return false;
    }
    return true;
}

uint64_t nPrime(uint64_t n) {
    uint64_t otvet = 1;
    uint64_t nomer = 0;
    while (nomer != n) {
        otvet++;
        if (checkPrime(otvet) == true) nomer++;
    }
    return otvet;
}

uint64_t nextPrime(uint64_t value) {
    uint64_t k = 0;
    while (k == 0) {
        value++;
        if (checkPrime(value) == true) {
            k = 1;
            return value;
        }
    }
}

uint64_t sumPrime(uint64_t hbound) {
    uint64_t chislo = 2;
    uint64_t otvet = 0;
    while (chislo < hbound) {
        if (checkPrime(chislo) == true) otvet += chislo;
        chislo++;
    }
    return otvet;
}
