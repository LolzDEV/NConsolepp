//
// Created by lolz on 03/05/20.
//

#ifndef NCONSOLE___CONSOLE_H
#define NCONSOLE___CONSOLE_H


#include <iostream>
#include "register.h"

class Console {
    public: enum LogType {INFO, WARN, ERROR};
    public: static void Log(LogType type, const std::string& msg);
    public: static void Update();
    public: static std::string prefix;
    public: static CommandRegister cmdReg;
};



#endif //NCONSOLE___CONSOLE_H
