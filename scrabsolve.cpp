#include <iostream>
#include <fstream>
#include <vector>
#include <string>
//#include <wordvals.h>

std::vector<std::string> wordArray;

void LoadFile(){
    std::ifstream inputFile("words.txt"); // Replace "words.txt" with the name of your text file
    if (!inputFile.is_open()) {
        std::cerr << "Error opening the file." << std::endl;
        return;
    }

    std::string word;

    while (std::getline(inputFile, word)) {
        // Assuming each line contains a single word
        if(word.length() == 8){
            wordArray.push_back(word);
        }
    }

    inputFile.close(); // Close the file when done
    return;
}

int main(int argc, char *argv[]) {
    LoadFile();
    for(std::string& a : wordArray){
        std::cout << a << std::endl;
    }
    std::cout<<wordArray.size()<<std::endl;
}