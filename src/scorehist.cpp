#include "scorehist.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <locale>

using namespace std;

ScoreHist::ScoreHist() {

}

vector<tuple<int, string, int>> scoreVector;

void ScoreHist::write(string player, int score, int size) {
    file.open("Scores.txt", fstream::in | fstream::out | fstream::app);
    file << player << " " << score << " " << size << "\n";

    file.close();
}

void ScoreHist::printBest() {

    string currentLine; 

    file.open("Scores.txt", fstream::in | fstream::out | fstream::app);
    while (getline(file, currentLine)) {
        istringstream linestream(currentLine);
        vector<string> currentLineVector;
        string currentLineTokens;
        while(getline(linestream, currentLineTokens, ' ')) {
            currentLineVector.push_back(currentLineTokens);
        }
        scoreVector.push_back(make_tuple(stoi(currentLineVector[1]), currentLineVector[0], stoi(currentLineVector[2])));
    }
    sort(scoreVector.begin(), scoreVector.end());

    std::cout << "### SCORES: ### " << "\n";
    for (int i=scoreVector.size()-1; i>=0; i--) {
        std::cout << get<1>(scoreVector[i]) << " " << get<0>(scoreVector[i]) << " " << get<2>(scoreVector[i]) << "\n";
    }

}


