
#include "File.h"

// Constructor
File::File(const std::string& name, const std::string& content, Date& date)
    : name(name), content(content), lastModified(date) {}

// Compare file modification dates
bool File::lessThan(const File& other) const {
    return lastModified.lessThan(other.lastModified);
}

// Print file name and date added
void File::print() const {
    std::cout << "File: " << name << "\nDate added: ";
    lastModified.print();
    std::cout << std::endl;
}

// Print file name, date added, and contents
void File::printContents() const {
    print();
    std::cout << "Contents: " << content << std::endl;
}
