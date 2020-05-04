//
// Created by lolz on 03/05/20.
//

#include "console.h"
#include "register.h"
#include "commands.h"
#include <vector>
#include <string>
#include <sstream>
#include <iterator>


std::vector<Commands*> commands;

void CommandRegister::registerCommand(Commands* command){
    commands.push_back(command);
}

void CommandRegister::checkInput(std::string cmd){
    std::istringstream buf(cmd);
    std::istream_iterator<std::string> beg(buf), end;
    std::vector<std::string> tokens(beg, end);
    std::vector<std::string> args;
    for (int i = 1; i < tokens.size(); i++){
        args.push_back(tokens[i]);
    }

    int error = 0;
    int max_error = 0;
    for (auto command : commands){
        if (command->aliases.empty()){
            max_error += 1;
            if (tokens[0] == command->command){
                command->on_command(args);
            } else {
                error += 1;
            }
        } else {
            for (auto alias : command->aliases){
                max_error += 1;
                if (tokens[0] == command->command || tokens[0] == alias){
                    command;
                } else {
                    error += 1;
                }
            }
        }
        if (error == max_error){
            std::cout << "\033[1;31m[ERROR] command " + tokens[0] + " not found\033[0m\n";
        }
    }
}


