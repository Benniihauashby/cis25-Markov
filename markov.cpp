#include "markov.h"
#include <string>
#include <fstream>

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
    std::ifstream inFile("test.txt");
    int count = 0;

    if (!inFile.is_open()) {
        return -1;
    }
    while (count < maxWords && inFile >> words[count])
        count = count + 1;

    inFile.close();
    
    return count;


}

int buildMarkovChain(const std::string words[], int numWords, int order,
                     std::string prefixes[], std::string suffixes[],
                     int maxChainSize){
    int count = 0;

    for(int i = 0; i <= numWords - order - 1; i++) {
        
        prefixes[i] = joinWords(words, i, order);
        suffixes[i] = words[i + order];

        count = count + 1;

        if (count == maxChainSize){break;}
        
    }
    return count; 
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