#ifndef SCOREHIST_H
#define SCOREHIST_H

#include <fstream>
#include <string>
#include <vector>

using namespace std;

class ScoreHist {

    public:
        ScoreHist();
        void write(string player, int score, int size);
        void printBest();

    private:
        fstream file;

};

#endif
