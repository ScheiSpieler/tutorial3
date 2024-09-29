
#ifndef FILE_H
#define FILE_H

#include "Date.h"
#include <string>
#include <iostream>

class File {
public:
    // Constructor
    File(const std::string& name, const std::string& content, Date& date);

    // Functions
    bool lessThan(const File& other) const;
    void print() const;
    void printContents() const;

private:
    // Member variables
    std::string name;
    std::string content;
    Date lastModified;
};

#endif
