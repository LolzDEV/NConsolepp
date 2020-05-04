//
// Created by lolz on 03/05/20.
//

#ifndef NCONSOLE___COMMANDS_H
#define NCONSOLE___COMMANDS_H


#include <iostream>
#include <vector>
#include <string>

class Commands{

public: static std::string command;
public: static std::string help_message;
public: static std::vector<std::string> aliases;
public: static void on_command(std::vector<std::string> args);
};

#endif //NCONSOLE___COMMANDS_H
