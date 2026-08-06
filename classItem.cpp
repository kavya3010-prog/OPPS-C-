#include <iostream>
#include <string>
using namespace std;

class Item
{
private:
    int item_code, item_unit;
    float item_price;
    string item_name;

public:
    void getdata()
    {
        cout << "Enter Item Code: ";
        cin >> item_code;

        cout << "Enter Item Name: ";
        cin >> item_name;

        cout << "Enter Item Price: ";
        cin >> item_price;

        cout << "Enter Item Unit: ";
        cin >> item_unit;
    }

    void display()
    {
        if (item_price > 100 && item_price < 200)
        {
            cout << "\nItem Code : " << item_code << endl;
            cout << "Item Name : " << item_name << endl;
            cout << "Item Price: " << item_price << endl;
            cout << "Item Unit : " << item_unit << endl;
        }
    }
};

int main()
{
    int n;

    cout << "Enter Number of Items: ";
    cin >> n;

    Item i[n];

    for (int j = 0; j < n; j++)
    {
        cout << "\nEnter Details of Item " << j + 1 << endl;
        i[j].getdata();
    }

    cout << "\nItems with Price > 100 and < 200\n";

    for (int j = 0; j < n; j++)
    {
        i[j].display();
    }

    return 0;
}