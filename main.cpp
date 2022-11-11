#include "executeFano.h"
#include <string>

int main(int argc, char *argv[]) {
    if ((argc != 3) && (argc != 4)){
        err();
        return -1;
    }

    std::string mode(argv[1]);
    std::string view(argv[argc - 2]);
    if (mode == "-c"){
        bool v = false;
        if (view == "-v") v = true;
        startAlgorithm(argv[argc-1], v);
        return 0;
    }
    if (mode == "-d"){
        bool v = false;
        if (view == "-v") v = true;
        decompile(argv[argc-1], v);
        return 0;
    }

    err();
    return -1;
}