#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <string>

class controller {
public:
    controller();   // Konstruktor
    ~controller();  // Destruktor

    void echo(const std::string& message) const; // Gibt String auf Konsole aus
};

#endif // CONTROLLER_H
