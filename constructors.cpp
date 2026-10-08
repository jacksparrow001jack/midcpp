#include <iostream>
using namespace std;

class CanteenItem {
private:
    string itemName;
    float price;

public:
    CanteenItem(string name, float p) {
        itemName = name;
        price = p;
    }
    void display() {
        cout << "Item Name: " << itemName << endl;
        cout << "Price: Rs. " << price << endl;
    }
};
int main() {
    CanteenItem item1("Dosa", 40);
    CanteenItem item2("Biryani", 120);

    cout << "Canteen Items:" << endl;
    item1.display();
    cout << endl;
    item2.display();

    return 0;
}

