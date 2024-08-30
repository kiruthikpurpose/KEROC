#ifndef FILELIB_H
#define FILELIB_H

#include <string>
#include <vector>

class FileLib {
public:
    static std::string readFile(const std::string &filePath);
    static void writeFile(const std::string &filePath, const std::string &content);
    static std::vector<std::string> readLines(const std::string &filePath);
    static void appendToFile(const std::string &filePath, const std::string &content);
};

#endif
