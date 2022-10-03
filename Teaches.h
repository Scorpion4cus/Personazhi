#ifndef ENIGMA_H
#define ENIGMA_H
#include"unit.h"

class Enigma: public unit
{
public:
    Enigma();
    void powershot(unit &enemy);
};

#endif // ENIGMA_H
