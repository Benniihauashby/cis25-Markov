#include <iostream>
#include <string>
#include "markov.h"


int main() {
    std::cout << "Hello" << std::endl;
    std::string testWords[] = {"the", "cat", "sat", "down"};
    std::cout << joinWords(testWords, 0, 2) << std::endl;  // Should print: the cat
    std::cout << joinWords(testWords, 1, 3) << std::endl;  // Should print: cat sat down

    std::string words[1000];
    int count = readWordsFromFile("test.txt", words, 1000);
    std::cout << "Read " << count << " words" << std::endl;
    for (int i = 0; i < 10 && i < count; i++) {
        std::cout << words[i] << std::endl;
    }

    std::string prefixes[10000], suffixes[10000];
    int chainSize = buildMarkovChain(words, count, 1, prefixes, suffixes, 10000);
    for (int i = 0; i < 20 && i < chainSize; i++) {
        std::cout << "[" << prefixes[i] << "] -> [" << suffixes[i] << "]" << std::endl;
    }

}