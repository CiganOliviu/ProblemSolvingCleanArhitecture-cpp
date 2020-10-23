#include "Testing/Testing.h"

int main() {

    AbstractTesting * Itesting;
    Testing testing;

    Itesting = &testing;

    Itesting->TestCaseOne();

    return 0;
}
