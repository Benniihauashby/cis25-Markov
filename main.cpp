#include <iostream>
#include <string>
#include "markov.h"


int main() {
    // test words for joinWords Function
    // std::cout << "Hello" << std::endl;
    // std::string testWords[] = {"the", "cat", "sat", "down"};
    // std::cout << joinWords(testWords, 0, 2) << std::endl;  // Should print: the cat
    // std::cout << joinWords(testWords, 1, 3) << std::endl;  // Should print: cat sat down

    // test reading from readWordsFromFile
    // std::string words[1000];
    // int count = readWordsFromFile("test.txt", words, 1000);
    // std::cout << "Read " << count << " words" << std::endl;
    // for (int i = 0; i < 10 && i < count; i++) {
    //     std::cout << words[i] << std::endl;
    // }

    // test for buildMarkovChain
    // std::string prefixes[10000], suffixes[10000];
    // int chainSize = buildMarkovChain(words, count, 1, prefixes, suffixes, 10000);
    // for (int i = 0; i < 20 && i < chainSize; i++) {
    //     std::cout << "[" << prefixes[i] << "] -> [" << suffixes[i] << "]" << std::endl;
    // }

    // // test for getRandomSuffix
    // for (int i = 0; i < 10; i++) {
    //     std::cout << getRandomSuffix(prefixes, suffixes, chainSize, "the") << std::endl;
    // }

    // // test for getRandomPrefix
    // for (int i = 0; i < 5; i++) {
    // std::cout << getRandomPrefix(prefixes, chainSize) << std::endl;
    // }

    // test for generateText
    // std::string output = generateText(prefixes, suffixes, chainSize, 1, 20);
    // std::cout << output << std::endl;

    // test for main
    std::string words[1000], prefixes[10000], suffixes[10000];

    std::string filename;
    std::cout << "Enter input filename: ";
    std::cin >> filename;

    int count = readWordsFromFile(filename, words, 1000);


    int order;
    std::cout << "Enter order (1, 2, or 3): ";
    std::cin >> order;

    int numWords;
    std::cout << "Enter number of words to generate: ";
    std::cin >> numWords;

    int chainSize = buildMarkovChain(words, count, 1, prefixes, suffixes, 10000);

    std::string output = generateText(prefixes, suffixes, chainSize, order, numWords);
    std::cout << output << std::endl;
}