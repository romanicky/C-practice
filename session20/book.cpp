#include <iostream>
using namespace std;

struct Book
{
    char title[50];
    char author[20];
    float price;
};

int main()
{
    int size = 5;
    struct Book books[size];
    int max_price_index = 0;

    for (int i = 0; i < size; i++)
    {
        cout << "Book " << i + 1 << ":" << endl;
        cout << "Title: ";
        cin >> books[i].title;
        cout << "Author: ";
        cin >> books[i].author;
        cout << "Price: ";
        cin >> books[i].price;
        if (books[i].price > books[max_price_index].price)
        {
            max_price_index = i;
        }
    }

    cout << "--- Book with Highest Price ---" << endl;
    cout << "Title: " << books[max_price_index].title << endl;
    cout << "Author: " << books[max_price_index].author << endl;
    cout << "Price: " << books[max_price_index].price << endl;
}