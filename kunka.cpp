#include "kunka.h"

kunka::kunka()
{
    this->health=100;
        this->armor=7;
        this->damage=24;
        strcpy(this->name, " kunka ");
}
void kunka::Torrent(unit &enemy){
    int uron = this->damage * 1.8;
    enemy.health -= uron;
    cout << this->name << " kinul torrent " << enemy.name
         <<" i nanosit " << this->damage << " urona "
         << endl;

}
void kunka::spell_1(unit &enemy) {
    this -> Torrent(enemy);
}
