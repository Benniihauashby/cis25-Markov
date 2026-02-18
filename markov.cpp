#include "markov.h"
#include <string>

std::string joinWords(const std::string words[], int startIndex, int count){
    int i = 0;
    std::string result = "";
    while (i < count) {
        if (i < count - 1)
            result = result + words[startIndex + i] + " ";
        else {result = result + words[startIndex + i];}
        i = i + 1;
        }
        
    return result;

    }
    


int readWordsFromFile(std::string filename, std::string words[], int maxWords){
    return 0;
}

int buildMarkovChain(const std::string words[], int numWords, int order,
                     std::string prefixes[], std::string suffixes[],
                     int maxChainSize){
    return 0;
}

std::string getRandomSuffix(const std::string prefixes[], const std::string suffixes[],
                            int chainSize, std::string currentPrefix){
    return "";
}

std::string getRandomPrefix(const std::string prefixes[], int chainSize){
    return "";
}

std::string generateText(const std::string prefixes[], const std::string suffixes[],
                         int chainSize, int order, int numWords){
    return "";
}