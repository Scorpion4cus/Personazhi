#ifndef KUNKA_H
#define KUNKA_H
#include"unit.h"

class kunka: public unit
{
public:
    kunka();
    void Torrent (unit &enemy);
     void spell_1 (unit &enemy);
};

#endif // KUNKA_H
