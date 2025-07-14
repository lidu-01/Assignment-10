#include <iostream>
#include "item.h"

Item::Item() {
    name = "Unknown";
    quantity = 0;
}

Item::Item(string itemName, int itemQuantity) {
    name = itemName;
    quantity = itemQuantity;
}

void Item::display() {
    cout << "Item: " << name << ", Quantity: " << quantity << endl;
}