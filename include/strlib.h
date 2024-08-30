#ifndef STRLIB_H
#define STRLIB_H

#include <string>

class StrLib {
public:
    static std::string toUpperCase(const std::string &str);
    static std::string toLowerCase(const std::string &str);
    static std::string trim(const std::string &str);
    static bool startsWith(const std::string &str, const std::string &prefix);
};

#endif
