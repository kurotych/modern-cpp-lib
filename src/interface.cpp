#include "../include/interface.h"

/* Need develop some better architecture.
 * Investigate what can be calculate in compile time.
 * Or some another ways for remove legacy code */

// C++ beck-end can look like that
/*-------------------------------*/
#include "../include/Add.hpp"
#include "../include/Sub.hpp"

class CppBackend : public Add, Sub {
    friend int add(int a, int b);
    friend int sub(int a, int b);
};
/*-------------------------------*/

int add(int a, int b) {
    return CppBackend::add(a, b);
}

int sub(int a, int b) {
    return CppBackend::sub(a, b);
}
