#ifndef PLAYER_H
#define PLAYER_H

#include <string>

using namespace std;

class Player {

    public:
        Player();
        string getName(){
            return _name;
        }


    private:
        string _name;

};

#endif