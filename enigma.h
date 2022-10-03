#ifndef ENIGMA_H
#define ENIGMA_H
#include"unit.h"

class Enigma: public unit
{
public:
    Enigma();
    void blackhole(unit &enemy);
};

#endif // ENIGMA_H
