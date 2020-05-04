//
// Created by lolz on 03/05/20.
//

#include "console.h"
#include <iostream>
#include "register.h"

std::string Console::prefix = "> ";
CommandRegister Console::cmdReg;

enum LogType {INFO, WARN, ERROR};

void Console::Log(LogType type, const std::string& msg){
    if (type == ERROR) {
        std::cout << "\033[1;31m[ERROR] " + msg + "\033[0m\n";
    } else if (type == WARN) {
        std::cout << "\033[1;33m[WARN] " + msg + "\033[0m\n";
    } else if (type == INFO) {
        std::cout << "\033[1;32m[INFO] " + msg + "\033[0m\n";
    }
}

void Console::Update(){
    std::cout << prefix;
    std::string inp;
    std::cin >> inp;
    cmdReg.checkInput(inp);
}
