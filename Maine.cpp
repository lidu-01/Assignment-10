#include <iostream>
#include "item.h"
using namespace std;

int main() {
    Item item1;
    Item item2("Books", 10);

    item1.display();
    item2.display();

    return 0;
}