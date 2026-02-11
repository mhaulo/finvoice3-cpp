#include <catch2/catch_session.hpp>
#include "../lib/finvoice3.h"

int main(int argc, char *argv[])
{
    // your setup ...

    int result = Catch::Session().run(argc, argv);

    // your clean-up...

    return result;
}
