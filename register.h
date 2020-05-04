//
// Created by lolz on 03/05/20.
//

#ifndef NCONSOLE___REGISTER_H
#define NCONSOLE___REGISTER_H


#include "commands.h"

class CommandRegister{
    public: static void checkInput(std::string cmd);
    public: static void registerCommand(Commands *command);
};


#endif //NCONSOLE___REGISTER_H
