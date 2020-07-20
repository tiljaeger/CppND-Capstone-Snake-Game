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

        void setScore(int score) {
            _score = score;
        }

    private:
        string _name;
        int _score{0};

        void toLowerCase();


};

#endif