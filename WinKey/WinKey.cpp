#include <iostream>
#include <cstdlib>
#include <windows.h>

using namespace std;

int main() {
    const char* command1 = "slmgr/ipk W269N-WFGWX-YVC9B-4J6C9-T83GX";
    int result1 = system(command1);
    if (result1 == 0) {
        std::cout << "Command 1 executed successfully." << std::endl;
    }
    else {
        std::cout << "Error executing the command 1." << std::endl;
    }

    const char* command2 = "slmgr /skms kms.digiboy.ir";
    int result2 = system(command2);
    if (result2 == 0) {
        std::cout << "Command 2 executed successfully." << std::endl;
    }
    else {
        std::cout << "Error executing the command 2." << std::endl;
    }

    const char* command3 = "slmgr /ato";
    int result3 = system(command3);
    if (result3 == 0) {
        std::cout << "Command 3 executed successfully." << std::endl;
    }
    else {
        std::cout << "Error executing the command 3." << std::endl;
    }

    if (result1 == 0 || result2 == 0 || result3 == 0)
    {
        cout << "Windows activated succesfully.";
        #ifdef _WIN32
        system(("start " + std::string("https://github.com/romavolosh")).c_str());
        #endif
    }
    else
    {
        cout << "Windows is not activated.";
    }
}