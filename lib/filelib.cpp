#include "filelib.h"
#include <fstream>
#include <sstream>

std::string FileLib::readFile(const std::string &filePath) {
    std::ifstream file(filePath);
    std::stringstream buffer;
    buffer << file.rdbuf();
    return buffer.str();
}

void FileLib::writeFile(const std::string &filePath, const std::string &content) {
    std::ofstream file(filePath);
    file << content;
}

std::vector<std::string> FileLib::readLines(const std::string &filePath) {
    std::ifstream file(filePath);
    std::string line;
    std::vector<std::string> lines;
    while (std::getline(file, line)) {
        lines.push_back(line);
    }
    return lines;
}

void FileLib::appendToFile(const std::string &filePath, const std::string &content) {
    std::ofstream file(filePath, std::ios_base::app);
    file << content;
}
