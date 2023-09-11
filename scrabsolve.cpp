#include <iostream>
#include <fstream>
#include <vector>
#include <string>

void LoadFile(){
    std::ifstream inputFile("words.txt"); // Replace "words.txt" with the name of your text file
    if (!inputFile.is_open()) {
        std::cerr << "Error opening the file." << std::endl;
        return;
    }

    std::vector<std::string> wordArray;
    std::string word;

    while (std::getline(inputFile, word)) {
        // Assuming each line contains a single word
        wordArray.push_back(word);
    }

    inputFile.close(); // Close the file when done
    return;
}

int main() {
    LoadFile();
    return 0;
}