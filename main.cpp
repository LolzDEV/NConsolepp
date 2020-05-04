#include <iostream>
#include "commands.h"
#include "register.h"
#include "console.h"
#include "main.h"



class CommandCiao: public Commands {
    public: static void on_command(std::vector<std::string> args){
        Console::Log(Console::WARN, "Ciao");
    }
};

int main() {


    CommandCiao* ciao;
    ciao->command = "ciao";
    CommandRegister commandRegister;
    commandRegister.registerCommand(ciao);
    Console console;
    ciao->on_command()
    console.cmdReg = commandRegister;
    console.prefix = ">> ";

    while (true){
        console.Update();
    }

    return 0;
}



