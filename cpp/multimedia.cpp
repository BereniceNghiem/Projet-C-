#include "multimedia.h"
#include <iostream>
#include <string>


Multimedia::Multimedia(std::string name, std::string filename) {
    this->name = name;
    this->filename = filename;
}

Multimedia::Multimedia() {
    this->name = "";
    this->filename = "";
}

Multimedia::~Multimedia() {
}

void Multimedia::setName(std::string name) {
    this->name = name;
}

void Multimedia::setFilename(std::string filename) {
    this->filename = filename;
}

std::string Multimedia::getName() const{
    return name;
}

std::string Multimedia::getFilename() const{
    return filename;
}

void Multimedia::write(std::ostream& f) const{
    f << name << '\n';
    f << filename << '\n';
}

void Multimedia::read(std::istream& f) {
    f >> name >> filename;
}

void Multimedia::printValues(std::ostream& out) const{
    out << "Nom : " << name;
    out << "Nom du ficher : " << filename;

}
